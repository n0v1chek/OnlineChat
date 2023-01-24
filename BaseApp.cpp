#include "BaseApp.h"
BaseApp::~BaseApp()
{
}

std::unique_ptr<BaseApp> BaseApp::_instance = nullptr;
BaseApp* BaseApp::instance()
{
    if (!_instance)
    {
        _instance = static_cast<std::unique_ptr<BaseApp>>(new BaseApp);
    }
    return _instance.get();
}

UserData* BaseApp::getCurrent()
{
    return _currentUser;
}

void BaseApp::setCurrent(UserData* userData)
{
    _currentUser = userData;
}

void BaseApp::addUser(const UserData& ud)
{
    _usersData.push_back(ud);
}

bool BaseApp::isLogin(const std::string& login)
{
    for (int i = 0; i < _usersData.size(); ++i)
    {
        if (_usersData[i].getLogin() == login)
            return true;
    } 
    return false;
}
bool BaseApp::isPassword(const std::string& password)
{

    for (int i = 0; i < _usersData.size(); ++i)
    {
        if (_usersData[i].getPassword() == password)
            return true;
    }
    return false;
   
}

UserData* BaseApp::findUser(const std::string& login)
{
    for (int i = 0; i < _usersData.size(); ++i)
    {
        if (_usersData[i].getLogin() == login)
            return &_usersData[i];
    }

    return nullptr;
}

BaseApp::BaseApp() 
    : _currentUser(nullptr)
{
}

