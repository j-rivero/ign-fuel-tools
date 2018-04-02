/*
 * Copyright (C) 2018 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef IGNITION_FUELTOOLS_IGN_HH_
#define IGNITION_FUELTOOLS_IGN_HH_

#include "ignition/fuel_tools/Export.hh"

/// \brief External hook to read the library version.
/// \return C-string representing the version. Ex.: 0.1.2
extern "C" IGNITION_FUEL_TOOLS_VISIBLE char *ignitionVersion();

/// \brief External hook to execute 'ign fuel list -t model' from the command
/// line.
/// \param[in] _url Optional server URL.
/// \param[in] _raw 'true' for machine readable output.
/// \return 1 if successful, 0 if not.
extern "C" IGNITION_FUEL_TOOLS_VISIBLE int listModels(
    const char *_url = nullptr, const char *_raw = "false");

#endif