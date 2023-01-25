#include "message.h"

Message::Message(std::string name, std::string message)
	: _message(name, message)
{

}

const std::string& Message::getName() const
{
	return _message.first;
}

const std::string& Message::getMessage() const
{
	return _message.second;
}
