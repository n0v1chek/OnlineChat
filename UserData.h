#pragma once

#include "PrivateUserData.h"

class UserData : public PrivateUserData
{
public:
    UserData(const std::string& name, const std::string& login);

};