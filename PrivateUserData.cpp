#include "PrivateUserData.h"

PrivateUserData::PrivateUserData(const std::string& login, const std::string& password)
	: _pData(login, password)
{
}

std::string PrivateUserData::getLogin() const
{
	return _pData.first;
}

std::string PrivateUserData::getPassword() const
{
	return _pData.second;
}

std::map<std::string, std::vector<Message>>& PrivateUserData::getMessages()
{
	return _messages;
}
