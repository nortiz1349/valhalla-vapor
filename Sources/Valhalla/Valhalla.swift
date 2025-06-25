
import Foundation
import ValhallaModels
import ValhallaConfigModels
import ValhallaWrapper

public protocol ValhallaProviding {
    init(_ config: ValhallaConfig) throws
    init(configPath: String) throws
    func route(request: RouteRequest) throws -> RouteResponse
}

public final class Valhalla: ValhallaProviding {
    private let actor: ValhallaCxx?
    private let configPath: String
    
    public convenience init(_ config: ValhallaConfig) throws {
        let configURL = try ValhallaFileManager.saveConfigTo(config)
        try self.init(configPath: configURL.relativePath)
    }
    
    public required init(configPath: String) throws {
        self.configPath = configPath
        self.actor = try ValhallaCxx(configPath: configPath)
    }
    
    public func route(request: RouteRequest) throws -> RouteResponse {
        let requestData = try JSONEncoder().encode(request)
        guard let requestStr = String(data: requestData, encoding: .utf8) else {
            throw ValhallaError.encodingNotUtf8("requestStr")
        }
        
        let resultStr = try route(rawRequest: requestStr)
        
        guard let resultData = resultStr.data(using: .utf8) else {
            throw ValhallaError.encodingNotUtf8("resultData")
        }
        
        if let error = try? JSONDecoder().decode(ValhallaErrorModel.self, from: resultData) {
            throw ValhallaError.valhallaError(error.code, error.message)
        }
        
        return try JSONDecoder().decode(RouteResponse.self, from: resultData)
    }
    
    public func route(rawRequest request: String) throws -> String {
        try actor!.route(request)
    }
}

final class ValhallaCxx {
    
    private var actor: UnsafeMutableRawPointer?
    private let lock = NSLock()
    
    init?(configPath: String) throws {
        guard let configCString = (configPath as NSString).utf8String else {
            throw ValhallaError.encodingNotUtf8("configCString")
        }
        
        actor = create_valhalla_actor(configCString)
        
        if actor == nil {
            throw ValhallaError.valhallaError(-1, "[FAILED] create_valhalla_actor")
        }
    }
    
    deinit {
        delete_valhalla_actor(actor)
        self.actor = nil
    }
    
    func route(_ request: String) throws -> String {
        lock.lock()
        defer { lock.unlock() }
        guard let reqCString = (request as NSString).utf8String else {
            throw ValhallaError.encodingNotUtf8("reqCString")
        }
        let res: std.string = ValhallaWrapper.route(reqCString, actor!)
        return String(describing: res)
    }
}
