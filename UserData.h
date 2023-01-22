#pragma once

#include "PrivateUserData.h"

class UserData : public PrivateUserData
{
public:
    UserData(const std::string& login, const std::string& password);

};