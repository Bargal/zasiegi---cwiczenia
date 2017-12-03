#include "klasaMain.h"
#include <iostream>

void klasaMain::jestem()
{
	std::cout << "\n klasamain jestem \n";
}

void klasaMain::jestem1()
{
	std::cout << "\n klasamain jestem2 \n";
}

void klasaMain::jestem2()
{
	std::cout << "\n klasamain jestem2 \n";
}

klasaMain::klasaMain()
{
	std::cout << "\n klasamain konstruktor \n";
}

klasaMain::~klasaMain()
{
	std::cout << "\n klasamain destruktor \n";
}

void klasaMain::jestemP()
{
	std::cout << "\n klasaSubMain JestemP \n";
}