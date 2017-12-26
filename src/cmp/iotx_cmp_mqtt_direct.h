/*
 * Copyright (c) 2014-2016 Alibaba Group. All rights reserved.
 * License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */



#ifndef __CMP_VIA_MQTT_DIRECT_H__
#define __CMP_VIA_MQTT_DIRECT_H__

#ifdef CMP_VIA_MQTT_DIRECT

#include "iot_import.h"

#include "utils_list.h"
#include "lite-utils.h"
#include "device.h"
#include "iot_export.h"
#include "iotx_cmp_common.h"


int iotx_cmp_mqtt_direct_disconnect_handler(iotx_cmp_conntext_pt cmp_pt);
int iotx_cmp_mqtt_direct_reconnect_handler(iotx_cmp_conntext_pt cmp_pt);
int iotx_cmp_mqtt_direct_register_handler(iotx_cmp_conntext_pt cmp_pt, char* URI, int result, int is_register);
int iotx_cmp_mqtt_direct_response_handler(iotx_cmp_conntext_pt cmp_pt, iotx_cmp_process_response_pt response);


void* iotx_cmp_mqtt_direct_init(iotx_cmp_conntext_pt cmp_pt, iotx_cmp_init_param_pt pparam);
int iotx_cmp_mqtt_direct_register(iotx_cmp_conntext_pt cmp_pt, const char* topic_filter);
int iotx_cmp_mqtt_direct_unregister(iotx_cmp_conntext_pt cmp_pt, const char* topic_filter);
int iotx_cmp_mqtt_direct_send(iotx_cmp_conntext_pt cmp_pt, const char* topic_filter, const void* payload, int payload_length);
int iotx_cmp_mqtt_direct_send_sync(iotx_cmp_conntext_pt cmp_pt, const char* topic_filter, const void* payload, int payload_length);
int iotx_cmp_mqtt_direct_yield(iotx_cmp_conntext_pt cmp_pt, int timeout_ms);
int iotx_cmp_mqtt_direct_deinit(iotx_cmp_conntext_pt cmp_pt);

#endif /* CMP_VIA_MQTT_DIRECT */

#endif /* __CMP_VIA_MQTT_DIRECT_H__ */


