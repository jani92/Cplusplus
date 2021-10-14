// Tekstitiedosto1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
#include<fstream>
#include <iomanip>
using namespace std;
int main()
{
	int taulu[5] = { 0,1,2,3,4 };
	int ind = 0;
	ofstream tiedosto("d:\\teksti\\teksti2.txt", ios_base::out );
	if (!tiedosto.is_open()) {
		cout << "Virhe, tallennus epäonnistui";
	}
	for (ind = 0; ind < 5; ind++)
		tiedosto << setw(10) << *(taulu + ind);
	tiedosto.write((char *)&taulu[ind], sizeof(int));
	tiedosto.close();
	
	string luku;
	ifstream arvot("d:\\teksti\\teksti2.txt", ios_base::in );
	if (arvot.fail())
	{
		cout << "Avaus epäonnistui.";
	}

	while (!arvot.eof())
	{

		arvot >> luku;
		cout << luku << endl;
	}
	arvot.close();
	return 0;
}


