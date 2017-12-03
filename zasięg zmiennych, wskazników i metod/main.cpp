#include <iostream>
#include "plik1.h"
#include "klasaMain.h"
#include "klasaSub.h"
#include "klasaSubPriv.h"
#include "innKlasa.h"

int globalMainA = 22;

int main()
{
	std::cout <<
		"witam.\n w tym projekcie bêdê testowaæ zasiêgi zmiennych, klas i wska¿ników miêdzy funkcjami, klasami i plikami projektu\n"
		<<
		"cwiczenia obejma te¿ dziedziczenie i zaprzyjaznianie klas" << std::endl;

	int mianA = 2;

	const int mainCons = 3;

	struct mainStruct
	{
		int str;
		const int constStr = 6;

		mainStruct::mainStruct()
		{
			str = 66;
			std::cout << "\ntworze strukture (konstruktor)\n";
		};
	};

	int* p_point = new int;

	mainStruct* p_mainStruct = new mainStruct;

	klasaMain* P_klasaMain1 = new klasaMain;

	klasaSub* p_klasaSub = new klasaSub;

	klasaSubPriv** p_p_klasaMainTab = new klasaSubPriv*[2]; //tblica obiektow qube wraz z inicjacja
	for (int i = 0; i < 2; i++)
	{
		p_p_klasaMainTab[i] = new klasaSubPriv[2];
	}

	// FUNKCJE ****************

	//std::cout << "*plik1G() =  " << plik1G(globalMainA) << std::endl;

	delete p_point;
	delete p_mainStruct;
	delete P_klasaMain1;

	innKlasa wariot;

	std::cout << "\n\aplik 1 daje odpowiedz w funkcji plik1():  " << plik1(10) << std::endl;

	//czyszczenie
	std::cout << "\n**********************  czyscimy!!*******************************\n";

	for (int i = 0; i < 2; i++)
	{
		delete[] p_p_klasaMainTab[i];
	}
	delete p_p_klasaMainTab;

	system("PAUSE");
}