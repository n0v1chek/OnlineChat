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
    std::cout << "Login: ";
    std::cin >> login;
    std::cout << "Password : ";
    std::cin >> password;
    User[login] = password;
}





void CLIBaseApp::signUp()
{

    for (int i = 0; i < 1; i++) {

        std::cout << i << "Login: ";
        std::cin >> login;
        std::cout << "Password: ";
        std::cin >> password;  // считываем введенные значения
        User.insert(make_pair(login, password));
    }
}

void CLIBaseApp::help()
{
    std::cout << "1. Sign in\n";
    std::cout << "2. Sign up\n";
    std::cout << "0. Exit\n";
}


