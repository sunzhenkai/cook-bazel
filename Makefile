.PHONY: build refresh

build:
	@bazel build //cmd/hello:hello

run: 
	@bazel run //cmd:main

refresh:
	@bazel run @hedron_compile_commands//:refresh_all

list:
	@bazel query //...
