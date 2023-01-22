#pragma once
#include <string>

class PrivateUserData
{
public:
    PrivateUserData(const std::string& login, const std::string& password);

    std::string getLogin() const;
    std::string getPassword() const;

private:
    std::pair<std::string, std::string> _pData;

};