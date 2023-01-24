#pragma once

#include <string>
#include <iostream>
#include"cli.h"

class CLIPrivateUserData : public CLI 
{
public:

	std::pair<std::string, std::string> getLoginAndPass();


	void help() override;

};
