/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * Copyright (C) 1994-2022 OpenTV, Inc. and Nagravision S.A.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <cxxreact/CxxModule.h>

#include "ReactSkia/utils/RnsUtils.h"

namespace facebook {
namespace xplat {

class RNSpotifyRemoteAppRemoteModule : public module::CxxModule {
 public:
  RNSpotifyRemoteAppRemoteModule();

  static std::unique_ptr<xplat::module::CxxModule> createModule();

  // Module Implementation
  std::string getName();
  virtual auto getConstants() -> std::map<std::string, folly::dynamic>;
  virtual auto getMethods() -> std::vector<Method>;

 private:
};

#ifdef __cplusplus
extern "C" {
#endif

xplat::module::CxxModule* RNSpotifyRemoteAppRemoteModuleCls(void) {
  return new RNSpotifyRemoteAppRemoteModule();
}

#ifdef __cplusplus
}
#endif

} // namespace xplat
} // namespace facebook

