// Tiedosto1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<fstream>
#include<iostream>
#include<iomanip>
using namespace std;
//binäärinen kirjoitus ja luku
//setw(int n) asettaa tulostuksen kentän leveydeksi n merkkiä
int main()

{
	int taulu[5] = { 0,1,2,3,4 };
	int ind = 0;
	ofstream tiedosto("d:\\temp\\tiedosto.dat", ios_base::out | ios_base::binary); 															 
	if(!tiedosto.is_open())	{
		cout << "Virhe, tallennus epäonnistui";
	}
	for (ind = 0; ind < 5; ind++)
		tiedosto << setw(10) << *(taulu + ind);
		tiedosto.write((char *)&taulu[ind], sizeof(int));
	tiedosto.close();

		int luku = 0;
		ifstream arvot("d:\\temp\\tiedosto.dat", ios_base::in | ios_base::binary);
		if (arvot.fail())
		{
			cout << "Avaus epäonnistui.";
		}
	
		while(!arvot.eof())
		{
			
			arvot >> luku; 
			cout << luku << endl;
		}
		arvot.close();
		
	return 0;
}
