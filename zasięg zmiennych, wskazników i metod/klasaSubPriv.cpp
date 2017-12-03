#include "klasaSubPriv.h"
#include <iostream>

void klasaSubPriv::jestem()
{
	std::cout << "\n klasaSubPriv START \n";
}
void klasaSubPriv::jestemP()
{
	std::cout << "\n klasaSubPriv :: prrivate jestem \n";
}

klasaSubPriv::klasaSubPriv()
{
	std::cout << "\n klasaSubPriv :: prrivate konstruktor \n";
}

klasaSubPriv::~klasaSubPriv()
{
	std::cout << "\n klasaSubPriv :: prrivate destruktor \n";
}