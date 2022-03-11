/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
 */

#ifndef DISTRIBUTED_CAMERA_HOST_CALLBACK_CLIENT_STUB_H
#define DISTRIBUTED_CAMERA_HOST_CALLBACK_CLIENT_STUB_H

#include "icamera_host_callback.h"
#include "iremote_stub.h"
#include "message_parcel.h"
#include "parcel.h"

namespace OHOS {
namespace DistributedHardware {
using namespace OHOS::Camera;
class DCameraHostCallbackStub : public IRemoteStub<ICameraHostCallback> {
public:
    virtual ~DCameraHostCallbackStub() = default;

    int32_t OnRemoteRequest(uint32_t code, MessageParcel &data, MessageParcel &reply,
                            MessageOption &option) override;
};
} // end namespace DistributedHardware
} // end namespace OHOS
#endif // DISTRIBUTED_CAMERA_HOST_CALLBACK_CLIENT_STUB_H