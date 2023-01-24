#include"CLIMassege.h"

void CLIMassege::mainMenu()
{
	while (true)
	{
		std::system("cls");

		help();

		int answer;
		std::cin >> answer;

		switch (answer)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			return;
		case 0:

			exit(0);
		default:
			break;
		}
	}
	
}

void CLIMassege::help()
{
	std::cout << "1. Send a message to user\n";
	std::cout << "2. Look at mutual chat\n";
	std::cout << "3. Send a message to all\n";
	std::cout << "4. Look at general chat\n";
	std::cout << "5. Back\n";
	std::cout << "0. Exit\n";
}
