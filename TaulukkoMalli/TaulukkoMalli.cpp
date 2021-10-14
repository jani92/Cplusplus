// TaulukkoMalli.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Taulukko.h"

int main()
{
	const int lkm = 4;
	//Taulukko<int> inttaulukko(lkm); //kutsuu muodostinta
	Taulukko<double> doubletaulukko(lkm); //kutsuu muodostinta
	try
	{
		doubletaulukko[0] = 4.5;
		doubletaulukko[1] = 5.3;
		doubletaulukko[2] = 6.5;
		doubletaulukko[3] = 7.2;
		for (int i = 0; i < 4; i++)
			cout << "alkion arvo: " << doubletaulukko[i] << endl;
	}
	catch (const out_of_range& ex)
	{
		cout << "out of range poikkeus " << ex.what();
	}
	
	return 0;
}

