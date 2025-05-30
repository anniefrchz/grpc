# Copyright 2017 gRPC authors.
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

load("//bazel:grpc_build_system.bzl", "grpc_cc_test", "grpc_package")
load("//test/cpp/microbenchmarks:grpc_benchmark_config.bzl", "HISTORY", "grpc_cc_benchmark")

licenses(["notice"])

grpc_package(name = "test/core/transport")

grpc_cc_test(
    name = "bdp_estimator_test",
    srcs = ["bdp_estimator_test.cc"],
    external_deps = [
        "gtest",
    ],
    tags = ["no_windows"],  # TODO(jtattermusch): investigate the timeout on windows
    uses_event_engine = False,
    uses_polling = False,
    deps = [
        "//:gpr",
        "//:grpc",
        "//test/core/test_util:grpc_test_util",
    ],
)

grpc_cc_test(
    name = "connectivity_state_test",
    srcs = ["connectivity_state_test.cc"],
    external_deps = [
        "gtest",
    ],
    deps = [
        "//:gpr",
        "//:grpc",
        "//test/core/test_util:grpc_test_util",
        "//test/core/test_util:grpc_test_util_base",
    ],
)

grpc_cc_test(
    name = "error_utils_test",
    srcs = ["error_utils_test.cc"],
    external_deps = [
        "gtest",
    ],
    tags = ["error_tests"],
    deps = [
        "//:gpr",
        "//:grpc",
        "//test/core/test_util:grpc_test_util",
        "//test/core/test_util:grpc_test_util_base",
    ],
)

grpc_cc_test(
    name = "promise_endpoint_test",
    srcs = ["promise_endpoint_test.cc"],
    external_deps = [
        "gtest",
    ],
    deps = [
        "//:grpc",
        "//src/core:activity",
        "//src/core:grpc_promise_endpoint",
        "//src/core:join",
        "//src/core:seq",
        "//test/core/promise:test_wakeup_schedulers",
    ],
)

grpc_cc_test(
    name = "status_conversion_test",
    srcs = ["status_conversion_test.cc"],
    external_deps = ["gtest"],
    uses_event_engine = False,
    uses_polling = False,
    deps = [
        "//:gpr",
        "//:grpc",
        "//test/core/test_util:grpc_test_util",
        "//test/core/test_util:grpc_test_util_base",
    ],
)

grpc_cc_test(
    name = "timeout_encoding_test",
    srcs = ["timeout_encoding_test.cc"],
    external_deps = [
        "gtest",
    ],
    uses_event_engine = False,
    uses_polling = False,
    deps = [
        "//:gpr",
        "//:grpc",
        "//test/core/test_util:grpc_test_util",
        "//test/core/test_util:grpc_test_util_base",
    ],
)

grpc_cc_benchmark(
    name = "bm_metadata",
    srcs = ["bm_metadata.cc"],
    monitoring = HISTORY,
    deps = [
        "//:grpc",
        "//src/core:default_event_engine",
        "//test/core/call:call_spine_benchmarks",
    ],
)

grpc_cc_test(
    name = "auth_context_test",
    srcs = ["auth_context_test.cc"],
    external_deps = [
        "absl/log:log",
        "gtest",
    ],
    uses_event_engine = False,
    uses_polling = False,
    deps = [
        "//:gpr",
        "//:grpc",
        "//test/core/test_util:grpc_test_util",
        "//test/core/test_util:grpc_test_util_base",
    ],
)
