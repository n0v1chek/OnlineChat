#pragma once
#include<iostream>
#include<string>
#include"CLI.h"
class CLIMassege :public CLI {
protected:

public:
	CLIMassege() = default;
	~CLIMassege() = default;
	CLIMassege(const CLIMassege& other);

};