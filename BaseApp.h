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

    UserData* getCurrent();
    void setCurrent(UserData* userData);

    void addUser(const UserData& ud);
    bool isLogin(const std::string& login);
    bool isPassword(const std::string& password);

    UserData* findUser(const std::string& login);

private:
    static std::unique_ptr<BaseApp> _instance;

    std::vector<UserData> _usersData;  // вектор пользователей
    UserData* _currentUser;
    

};



