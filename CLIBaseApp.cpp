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
    std::string login, password;

    CLIPrivateUserData cliPrivateUserData;

    while (true)
    {
        std::tie(login, password) = cliPrivateUserData.getLoginAndPass();

        if (!_baseApp->isLogin(login) && !_baseApp->isPassword(password))
        {
            std::cout << "Incorrect input";
            std::system("pause");

            continue;
        }


        break;
    }

    _baseApp->setCurrent(_baseApp->findUser(login));


    CLIUserData cliUserData;
    CLIMassege cliMessage;

    while (true)
    {
        std::system("cls");

        cliUserData.help();

        int answer;
        std::cin >> answer;

        switch (answer)
        {
        case 1:

            cliMessage.mainMenu();

            break;
        case 2:

            // settings ( just for decency )

            break;
        case 3:

            // back( need to be cleared )

            return;
        case 0:

            exit(0);
        default:
            break;
        }
    }
}


void CLIBaseApp::signUp()
{
    std::string login, password;
    CLIPrivateUserData cliPrivateUserData;

    while (true)
    {
        std::tie(login, password) = cliPrivateUserData.getLoginAndPass();

        if (!_baseApp->isLogin(login))
        {
            std::cout << "User with \"" << login << "\" login doesn't exist";
            std::system("pause");

            continue;
        }

        
        break;
    }

    _baseApp->addUser(UserData(login, password));
}

void CLIBaseApp::help()
{
    std::cout << "1. Sign in\n";
    std::cout << "2. Sign up\n";
    std::cout << "0. Exit\n";
}