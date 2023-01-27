#include <iostream>

#include "cliBaseApp.h"


auto main() -> int
{
	CLIBaseApp cliBaseApp;

	while (1)
	{
		std::system("cls");
		cliBaseApp.help();

		int answer;
		std::cin >> answer;

		switch (answer)
		{
		case 1:
			cliBaseApp.signIn();
			break;

		case 2:
			cliBaseApp.signUp();
			break;

		case 0:
			exit(0);

		default:
			break;
		}
	}
}