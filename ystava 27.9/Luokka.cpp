// Luokka.cpp: implementation of the CLuokka class.
//
//////////////////////////////////////////////////////////////////////

#include "Luokka.h"
#include <iostream>
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
static int lkm;
using namespace std;

int CLuokka::doll = 10; //alustetaan yksityinen staattinen jäsenmuuttuja

CLuokka::CLuokka()
{
	lkm = 1;
}

CLuokka::~CLuokka()
{

}



void CLuokka::YstavanKutsu()
{
	cout << "tere" << endl;
}



void CLuokka::LisaaLkm()
{
	llkm++;
	cout << llkm << endl;
}	

void CLuokka::LissaaLkm()
{
	lkm++;
	cout << lkm << endl;
}

void CLuokka::LisaaDoll()
{
	doll++;
}


