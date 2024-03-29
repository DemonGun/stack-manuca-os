/*******************************************************************************************************
 * Copyright (c) 2018-2019 Government Technology Agency of Singapore (GovTech)
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied.
 *
 * See the License for the specific language governing permissions and limitations under the License.
 *******************************************************************************************************/

#ifndef DECADA_MANAGER_H
#define DECADA_MANAGER_H

#include <string>
#include "mbed.h"

std::string GetDecadaRootCA(NetworkInterface* network);
std::string CheckDeviceRegistrationStatus(NetworkInterface* network);
std::string RegisterDeviceToDecada(NetworkInterface* network, std::string device_name);
std::string ApplyMqttCertificate(NetworkInterface* network, std::string decada_root_ca);

#endif  // DECADA_MANAGER_H