#include"CLIBaseApp.h"

CLIBaseApp::CLIBaseApp()
	: _baseApp(BaseApp::instance())
{
}

CLIBaseApp::~CLIBaseApp()
{
}


void CLIBaseApp::signIn()
{
}

void CLIBaseApp::signUp()
{
}

void CLIBaseApp::help()
{
	std::cout << "1. Sign in\n";
	std::cout << "2. Sign up\n";
	std::cout << "0. Exit\n";
}

