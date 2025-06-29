import Foundation

public enum ValhallaError: Error, Hashable {
    case encodingNotUtf8(String)
    case valhallaError(Int, String)
}
