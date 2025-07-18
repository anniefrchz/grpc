// Copyright 2025 The gRPC Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "src/core/util/wait_for_single_owner.h"

#include "src/core/util/no_destruct.h"

namespace grpc_core {

NoDestruct<absl::AnyInvocable<void()>> cb_{nullptr};

void SetWaitForSingleOwnerStalledCallback(absl::AnyInvocable<void()> cb) {
  *cb_ = std::move(cb);
}

void WaitForSingleOwnerStalled() {
  if (*cb_ != nullptr) (*cb_)();
}

}  // namespace grpc_core