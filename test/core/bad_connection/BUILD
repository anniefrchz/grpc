# Copyright 2016 gRPC authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

load("//bazel:grpc_build_system.bzl", "grpc_cc_binary", "grpc_package")

licenses(["notice"])

grpc_package(name = "test/core/bad_connection")

grpc_cc_binary(
    name = "close_fd_test",
    srcs = [
        "close_fd_test.cc",
    ],
    external_deps = [
        "absl/log:check",
        "absl/log:log",
    ],
    tags = ["no_windows"],
    deps = [
        "//:gpr",
        "//:grpc",
        "//:server",
        "//src/core:channel_args",
        "//test/core/test_util:grpc_test_util",
    ],
)
