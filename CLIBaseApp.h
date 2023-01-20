#pragma once
#include<iostream>
#include<string>
#include"CLI.h"
class CLIBaseApp :public CLI {
protected:

public:
	CLIBaseApp() = default;
	~CLIBaseApp() = default;
	CLIBaseApp(const CLIBaseApp& other);

};