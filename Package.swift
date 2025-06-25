// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.
import PackageDescription

let isLocal = Context.environment["VALHALLA_DEV"].flatMap(Bool.init) ?? false

var cxxSettings: [CXXSetting] {
    if isLocal {
        [.headerSearchPath("build/valhalla-wrapper.xcframework/macos-arm64/Headers/include")]
    } else {
        []
    }
}

var binaryTarget: Target {
    if isLocal {
        .binaryTarget(
            name: "ValhallaWrapper",
            path: "build/valhalla-wrapper.xcframework"
        )
    } else {
        .binaryTarget(
            name: "ValhallaWrapper",
            url: "https://github.com/nortiz1349/valhalla-vapor/releases/download/0.1.0/valhalla-wrapper.xcframework.zip",
            checksum: "fa924c7256f4522f1aaabf192c27ca4656be9636404c5ca756805ad5f5812148"
        )
    }
}

let package = Package(
    name: "valhalla-vapor",
    platforms: [
        .macOS(.v13)
    ],
    products: [
        .library(
            name: "Valhalla",
            targets: ["Valhalla"]),
    ],
    dependencies: [
        .package(url: "https://github.com/nortiz1349/valhalla-openapi-models-swift.git", from: "0.0.4"),
    ],
    targets: [
        .target(
            name: "Valhalla",
            dependencies: [
                "ValhallaWrapper",
                .product(name: "ValhallaConfigModels", package: "valhalla-openapi-models-swift"),
                .product(name: "ValhallaModels", package: "valhalla-openapi-models-swift"),
            ],
            path: "Sources/Valhalla",
            resources: [
                .process("SupportData")
            ],
            cxxSettings: cxxSettings,
            swiftSettings: [
                .interoperabilityMode(.Cxx),
            ],
        ),
        binaryTarget
    ],
    cLanguageStandard: .gnu17,
    cxxLanguageStandard: .cxx17
)
