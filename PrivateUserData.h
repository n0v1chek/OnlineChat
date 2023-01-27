#pragma once

#include <string>
#include <map>
#include <vector>

#include "message.h"

class PrivateUserData
{
public:
    PrivateUserData(const std::string& login, const std::string& password);

    std::string getLogin() const;
    std::string getPassword() const;

    std::map<std::string, std::vector<Message>>& getMessages();
    
private:
    std::pair<std::string, std::string> _pData;
    std::map<std::string, std::vector<Message>> _messages;
    
};