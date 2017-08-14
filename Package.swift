// swift-tools-version:3.1

import PackageDescription

let package = Package(
    name: "GSLApi",
    pkgConfig: "gsl",
    providers: [
      .Brew("gsl"),
      .Apt("libgsl-dev")
    ]
)
