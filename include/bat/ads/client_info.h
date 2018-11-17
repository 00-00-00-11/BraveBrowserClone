/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#pragma once

#include <string>

#include "bat/ads/export.h"

namespace ads {

struct ADS_EXPORT ClientInfo {
  ClientInfo();
  ClientInfo(const ClientInfo& info);
  ~ClientInfo();

  std::string application_version;

  std::string platform;
  std::string platform_version;
};

}  // namespace ads
