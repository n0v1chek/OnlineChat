#pragma once

#include <iostream>
#include "cli.h"
#include "BaseApp.h"


class CLIMessage : public CLI 
{
public:
	CLIMessage(UserData* current);

	void mainMenu();

	void sendToSomebody();
	void mutualChat();
	void sendToALl();
	void generalChat();

	void help() override;

private:
	BaseApp* _baseApp;
	UserData* _current;

};