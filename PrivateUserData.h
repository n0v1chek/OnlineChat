#pragma once

#include"UserData.h"

class PrivateUserData : public UserData 
{
public:
    PrivateUserData() = default;
    ~PrivateUserData() = default;
    PrivateUserData(const PrivateUserData& other);

};