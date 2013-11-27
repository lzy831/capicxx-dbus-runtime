/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.4.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Second_Root_STUB_DEFAULT_H_
#define COMMONAPI_TESTS_MANAGED_Second_Root_STUB_DEFAULT_H_


#include <commonapi/tests/managed/SecondRootStub.h>
#include <sstream>

namespace commonapi {
namespace tests {
namespace managed {

/**
 * Provides a default implementation for SecondRootStubRemoteEvent and
 * SecondRootStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class SecondRootStubDefault : public virtual SecondRootStub {
public:
    SecondRootStubDefault();

    SecondRootStubRemoteEvent* initStubAdapter(const std::shared_ptr<SecondRootStubAdapter>& stubAdapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId);




    bool registerManagedStubLeafInterfaceAutoInstance(std::shared_ptr<LeafInterfaceStub>);
    bool registerManagedStubLeafInterface(std::shared_ptr<LeafInterfaceStub>, const std::string&);
    bool deregisterManagedStubLeafInterface(const std::string&);
    std::set<std::string>& getLeafInterfaceInstances();

protected:
private:
    class RemoteEventHandler: public SecondRootStubRemoteEvent {
     public:
        RemoteEventHandler(SecondRootStubDefault* defaultStub);


     private:
        SecondRootStubDefault* defaultStub_;
    };

    RemoteEventHandler remoteEventHandler_;
    uint32_t autoInstanceCounter_;


    CommonAPI::Version interfaceVersion_;
};

} // namespace managed
} // namespace tests
} // namespace commonapi

#endif // COMMONAPI_TESTS_MANAGED_Second_Root_STUB_DEFAULT_H_
