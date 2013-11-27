/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.4.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "LegacyInterfaceDBusProxy.h"

namespace fake {
namespace legacy {
namespace service {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createLegacyInterfaceDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection) {
    return std::make_shared<LegacyInterfaceDBusProxy>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection);
}

__attribute__((constructor)) void registerLegacyInterfaceDBusProxy(void) {
    CommonAPI::DBus::DBusFactory::registerProxyFactoryMethod(LegacyInterface::getInterfaceId(),
       &createLegacyInterfaceDBusProxy);
}

LegacyInterfaceDBusProxy::LegacyInterfaceDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection):
        CommonAPI::DBus::DBusProxy(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyconnection)
    {
    }



void LegacyInterfaceDBusProxy::TestMethod(const int32_t& input, CommonAPI::CallStatus& callStatus, int32_t& val1, int32_t& val2) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<int32_t, int32_t> >::callMethodWithReply(
        *this,
        "TestMethod",
        "i",
        input,
        callStatus
        , val1, val2);
}
std::future<CommonAPI::CallStatus> LegacyInterfaceDBusProxy::TestMethodAsync(const int32_t& input, TestMethodAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<int32_t, int32_t> >::callMethodAsync(
        *this,
        "TestMethod",
        "i",
        input, 
        std::move(callback));
}
void LegacyInterfaceDBusProxy::OtherTestMethod(CommonAPI::CallStatus& callStatus, std::string& greeting, int32_t& identifier) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::string, int32_t> >::callMethodWithReply(
        *this,
        "OtherTestMethod",
        "",
        callStatus
        , greeting, identifier);
}
std::future<CommonAPI::CallStatus> LegacyInterfaceDBusProxy::OtherTestMethodAsync(OtherTestMethodAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::string, int32_t> >::callMethodAsync(
        *this,
        "OtherTestMethod",
        "",
        std::move(callback));
}
void LegacyInterfaceDBusProxy::finish(CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "finish",
        "",
        callStatus
        );
}
std::future<CommonAPI::CallStatus> LegacyInterfaceDBusProxy::finishAsync(FinishAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "finish",
        "",
        std::move(callback));
}



void LegacyInterfaceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
}

} // namespace service
} // namespace legacy
} // namespace fake
