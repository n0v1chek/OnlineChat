#pragma once

#include <memory>
#include <iostream>
#include <vector>

#include "UserData.h"

class BaseApp
{
private:
    BaseApp();

    BaseApp(BaseApp const&) = delete;
    BaseApp& operator= (BaseApp const&) = delete;

public:
    ~BaseApp();

public:
    static BaseApp* instance();

    void addUser(const UserData& ud);
    bool isExist(const std::string& login);

private:
    static std::unique_ptr<BaseApp> _instance;
    std::vector<UserData> _usersData;  // вектор пользователей

};



