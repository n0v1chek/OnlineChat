#pragma once
#include<iostream>
#include<string>
#include"CLI.h"
class CLIPrivateUserData :public CLI {
protected:

public:
	CLIPrivateUserData() = default;
	~CLIPrivateUserData() = default;
	CLIPrivateUserData(const CLIPrivateUserData& other);

};
