/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#pragma once

#include <string>

namespace ads {

struct LoadInfo {
  LoadInfo() :
      tab_id(0),
      tab_url("") {}

  explicit LoadInfo(const LoadInfo& info) :
      tab_id(info.tab_id),
      tab_url(info.tab_url) {}

  ~LoadInfo() {}

  uint32_t tab_id;
  std::string tab_url;
};

}  // namespace ads
