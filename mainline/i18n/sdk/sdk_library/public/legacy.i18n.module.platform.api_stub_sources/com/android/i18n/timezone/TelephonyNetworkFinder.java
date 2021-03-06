/*
 * Copyright (C) 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


package com.android.i18n.timezone;


/**
 * A class that can find telephony network information loaded via {@link com.android.i18n.timezone.TelephonyLookup TelephonyLookup}.
 *
 * @hide
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class TelephonyNetworkFinder {

private TelephonyNetworkFinder() { throw new RuntimeException("Stub!"); }

/**
 * Returns information held about a specific MCC + MNC combination. It is expected for this
 * method to return {@code null}. Only known, unusual networks will typically have information
 * returned, e.g. if they operate in countries other than the one suggested by their MCC.
 */

public com.android.i18n.timezone.TelephonyNetwork findNetworkByMccMnc(java.lang.String mcc, java.lang.String mnc) { throw new RuntimeException("Stub!"); }
}

