#pragma once

#include"cli.h"

class CLIPrivateUserData : public CLI 
{
public:
	CLIPrivateUserData() = default;
	~CLIPrivateUserData() = default;
	CLIPrivateUserData(const CLIPrivateUserData& other);

};
