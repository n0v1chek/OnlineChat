#pragma once

#include <iostream>
#include"cli.h"

class CLIMassege : public CLI 
{
public:

	void mainMenu();

	void help() override;
};