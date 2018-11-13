/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "bat/ads/ads.h"
#include "ads_impl.h"

namespace ads {

bool _is_debug = false;
bool _is_testing = false;
bool _is_production = false;

// static
Ads* Ads::CreateInstance(AdsClient* ads_client) {
  return new AdsImpl(ads_client);
}

}  // namespace ads
