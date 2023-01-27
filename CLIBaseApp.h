#pragma once

#include <map>
#include <string>

#include "cli.h"
#include "cliPrivateUserData.h"
#include "cliUserData.h"
#include "cliMassege.h"
#include "BaseApp.h"


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
	UserData* _current;
};