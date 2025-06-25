// swift-tools-version: 6.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

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
        .package(url: "https://github.com/nortiz1349/Light-Swift-Untar.git", from: "1.0.5"),
    ],
    targets: [
        .target(
            name: "Valhalla",
            dependencies: [
//                "ValhallaObjc",
                "ValhallaWrapper",
                .product(name: "ValhallaConfigModels", package: "valhalla-openapi-models-swift"),
                .product(name: "ValhallaModels", package: "valhalla-openapi-models-swift"),
                .product(name: "Light-Swift-Untar", package: "Light-Swift-Untar"),
            ],
            path: "Sources/Valhalla",
            resources: [
                .process("SupportData")
            ],
            cxxSettings: [
                .headerSearchPath("build/valhalla-wrapper.xcframework/macos-arm64/Headers/include"),
            ],
            swiftSettings: [
                .interoperabilityMode(.Cxx),
            ],
        ),
//        .target(
//            name: "ValhallaObjc",
//            dependencies: ["ValhallaWrapper"],
//            path: "Sources/ValhallaObjc",
//            linkerSettings: [.linkedLibrary("z")]
//        ),
        .binaryTarget(
            name: "ValhallaWrapper",
            path: "build/valhalla-wrapper.xcframework"
        )
    ],
    cLanguageStandard: .gnu17,
    cxxLanguageStandard: .cxx17
)
