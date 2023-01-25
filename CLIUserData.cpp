#include "CLIUserData.h"

CLIUserData::CLIUserData(UserData* current)
	: _baseApp(BaseApp::instance()), _current(current)
{
	
}

void CLIUserData::help()
{
	std::cout << "Your login: " << _current->getLogin() << "\n";
	std::cout << "1. Go message\n";
	std::cout << "2. Settings\n";
	std::cout << "3. Back\n";
	std::cout << "0. Exit\n";
}
