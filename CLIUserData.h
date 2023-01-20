#pragma once
#include<iostream>
#include<string>
#include"CLI.h"
class CLIUserData :public CLI {
protected:

public:
	CLIUserData() = default;
	~CLIUserData() = default;
	CLIUserData(const CLIUserData& other);

};
