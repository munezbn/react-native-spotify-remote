/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * Copyright (C) 1994-2022 OpenTV, Inc. and Nagravision S.A.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <cxxreact/JsArgumentHelpers.h>

#include "ReactSkia/utils/RnsLog.h"

#include "RNSpotifyRemoteAppModule.h"

using namespace folly;

namespace facebook {
namespace xplat {

RNSpotifyRemoteAppRemoteModule::RNSpotifyRemoteAppRemoteModule() { }

std::string RNSpotifyRemoteAppRemoteModule::getName() {
  return "RNSpotifyRemoteAppRemote";
}

auto RNSpotifyRemoteAppRemoteModule::getConstants() -> std::map<std::string, folly::dynamic> {
  RNS_LOG_NOT_IMPL; // Refer SampleCxxModule.cpp
  return {};
}

// Module Methods
auto RNSpotifyRemoteAppRemoteModule::getMethods() -> std::vector<Method> {
  return {
      Method(
          "__registerAsJSEventEmitter",
          [] (dynamic args) {
            RNS_LOG_NOT_IMPL;
            RNS_LOG_INFO("__registerAsJSEventEmitter Module ID : " << jsArgAsInt(args, 0));
            return;
          }),
      Method(
          "connect",
          [] (dynamic args, Callback cb, Callback cbError) {
            RNS_LOG_NOT_IMPL;
            cb({});
            return;
          }),
      Method(
          "playUri",
          [this] (dynamic args, Callback cb, Callback cbError) {
            RNS_LOG_NOT_IMPL;
            RNS_LOG_INFO("[" << this << "] Play Spotify URI  : " << jsArgAsString(args, 0));
            cb({});
            return;
          }),
      Method(
          "pause",
          [this] (dynamic args, Callback cb, Callback cbError) {
            RNS_LOG_NOT_IMPL;
            RNS_LOG_INFO("[" << this << "] Pause Spotify Playback");
            cb({});
            return;
          }),
      Method(
          "seek",
          [] (dynamic args, Callback cb, Callback cbError) {
            RNS_LOG_NOT_IMPL;
            cb({});
            return;
          }),
      // There are more methods to be added. Unless these methods are not called in app, we should not have any issue
  };
}

} // namespace xplat
} // namespace facebook
