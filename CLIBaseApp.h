#pragma once
#include <map>
#include <string>
#include "BaseApp.h"
#include "cli.h"

class CLIBaseApp : public CLI
{
public:
	CLIBaseApp();
	~CLIBaseApp();

public:
	void signIn();
	void signUp();
	void help() override;

private:
	BaseApp* _baseApp;

};