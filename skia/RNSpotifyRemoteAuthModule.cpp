/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * Copyright (C) 1994-2022 OpenTV, Inc. and Nagravision S.A.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */
#include <iostream>
#include "ReactSkia/utils/RnsLog.h"

#include "RNSpotifyRemoteAuthModule.h"

using namespace folly;

namespace facebook {
namespace xplat {

std::string RNSpotifyRemoteAuthModule::getName() {
  return "RNSpotifyRemoteAuth";
}

auto RNSpotifyRemoteAuthModule::getConstants() -> std::map<std::string, folly::dynamic> {
  RNS_LOG_NOT_IMPL; // Refer SampleCxxModule.cpp
  return {};
}

// Module Methods
auto RNSpotifyRemoteAuthModule::getMethods() -> std::vector<Method> {
  return {
      Method(
          "authorize",
          [] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
            for (auto& val : args) {
              if(args.type() == dynamic::OBJECT) {
                std::string cliendID = val["clientID"].getString();
                std::string rUrl = val["redirectURL"].getString();
                RNS_LOG_DEBUG("Client ID : " <<  cliendID << "RequestUrl : " << rUrl.c_str());
              }
            }
#if 0
            if(error && cbError) {
              cbError({"Authorize Error but why !"});
            }else if(cb) {
              dynamic d = dynamic::object
              ("accessToken", "Invalid")
              ("refreshToken", "Invalid")
              ;
d                cb({d});
              }
#endif
            return;
          }),
      Method(
          "getSession",
          [] () -> bool {
            RNS_LOG_NOT_IMPL;
            return true;
          },
          SyncTag),
      Method(
          "endSession",
          [] () -> bool {
            RNS_LOG_NOT_IMPL;
            return true;
          },
          SyncTag),
  };
}

} // namespace xplat
} // namespace facebook
