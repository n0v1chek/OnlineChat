#pragma once
#include <string>

class PrivateUserData
{
public:
    PrivateUserData(const std::string& name, const std::string& login);


private:
    std::pair<std::string, std::string> _pData;

};