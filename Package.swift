// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TapResearchSDK",
    platforms: [
		.iOS(.v13)
    ],
    products: [
        .library(
            name: "TapResearchSDK",
            targets: ["TapResearchSDK"])
    ],
    targets: [
        .binaryTarget(
            name: "TapResearchSDK",
            path: "./TapResearchSDK.xcframework"
        )
    ]
)