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

    void printChat(const std::string& chatName);                           // print concrete chat
    void printChat();                                                      // print general chat
    void sendMessage(const Message& message, const std::string& receiver); // send to concrete chat
    void sendMessage(const Message& message);                              // send to general chat

private:
    static std::unique_ptr<BaseApp> _instance;

    std::vector<UserData> _usersData;  // vector of users
    UserData* _currentUser;
    
    std::vector<Message> _generalChat;
};



