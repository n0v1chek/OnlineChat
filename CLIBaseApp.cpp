#include"CLIBaseApp.h"
#include <map>
#include <string>
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
    std::string login, password;

    while (true)
    {

        std::cout << "Login: ";
        std::cin >> login;

        if (_baseApp->isExist(login))
        {

        }

        std::cout << "Password: ";
        std::cin >> password;


    }

    _baseApp->addUser(UserData(login, password));
}

void CLIBaseApp::help()
{
    std::cout << "1. Sign in\n";
    std::cout << "2. Sign up\n";
    std::cout << "0. Exit\n";
}


