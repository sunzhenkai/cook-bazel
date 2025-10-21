load("@rules_cc//cc:cc_binary.bzl", "cc_binary")

cc_library(
    name = "greet",
    srcs = ["greet.cc"],
    hdrs = ["greet.h"],
)

cc_binary(
    name = "hello",
    srcs = ["hello.cc"],
    deps = [
        ":greet",
        "//lib:htime",
    ],
)
