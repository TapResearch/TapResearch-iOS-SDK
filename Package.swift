// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "TapResearchSDK",
    platforms: [
		.iOS(.v15)
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