#pragma once
#include<iostream>
#include<string>
#include"UserData.h"
class PrivateUserData : public UserData {
protected:

public:
    PrivateUserData() = default;
    ~PrivateUserData() = default;
    PrivateUserData(const PrivateUserData& other);

};