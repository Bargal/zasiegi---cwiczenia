#include "plik1.h"
#include "klasaMain.h"
#include "klasaSub.h"
#include "klasaSubPriv.h"
//#include "main.cpp"

int plik1(int x)
{
	return x;
}

/*int * plik1G(int globalMainA)
{
	int *p_globalMainA = &globalMainA;
	return p_globalMainA;
}*/

int plik1L(int *p_plik_zMain)
{
	int x = int(p_plik_zMain);
	return x;
}