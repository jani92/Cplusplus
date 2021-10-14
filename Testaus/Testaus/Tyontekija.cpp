#include "Tyontekija.h"
#include <iostream>

using namespace std;

Tyontekija::Tyontekija(string tunnus)
{
	this->m_tunnus = tunnus;
}

void Tyontekija::TulostaTiedot()
{
	cout << "tunnus: " << this->m_tunnus << endl;
}
