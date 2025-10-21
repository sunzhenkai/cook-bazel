.PHONY: build refresh

build:
	@bazel build //cmd/hello:hello

refresh:
	@bazel run @hedron_compile_commands//:refresh_all
