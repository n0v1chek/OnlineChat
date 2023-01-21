#pragma once

#include"cli.h"

class CLIBaseApp : public CLI 
{
public:
	CLIBaseApp() = default;
	~CLIBaseApp() = default;
	CLIBaseApp(const CLIBaseApp& other);

};