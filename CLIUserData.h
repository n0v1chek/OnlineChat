#pragma once

#include"cli.h"

class CLIUserData : public CLI 
{
public:
	CLIUserData() = default;
	~CLIUserData() = default;
	CLIUserData(const CLIUserData& other);

};
