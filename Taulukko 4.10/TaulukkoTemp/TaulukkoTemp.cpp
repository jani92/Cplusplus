// TaulukkoTemp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Taulukko.h"
#include "kulkuvaline.h"
#include "auto.h"
#include "vene.h"
#include <iostream>

using namespace std;

void suoritaAja(Ckulkuvaline& vne);

int main()
{
	const int lkm = 4;
	Taulukko<Ckulkuvaline*> kvalineet(lkm);
	
	try
	{
		Cauto* a1 = new Cauto(50);
		Cauto* a2 = new Cauto(40);
		Cvene* v1 = new Cvene(30);
		Cvene* v2 = new Cvene(25);

		//Cvene* v3 = dynamic_cast<Cvene*>(a2);

		kvalineet[0] = a1;
		kvalineet[1] = a2;
		kvalineet[2] = v1;
		kvalineet[3] = v2;

		for (int i = 0; i < 4; i++)
			kvalineet[i]->aja(); //polymorfismin mukaan kutsutaan oikean aliluokan aja -metodia
		
		//tai alla olevalla tavalla viittauksella
		/*for (int i = 0; i < 4; i++)
			suoritaAja(*kvalineet[i]);*/
		
		delete a1;
		delete a2;
		delete v1;
		delete v2;

		
	
	}
	catch (const out_of_range& ex)
	{
		cout << "out of range poikkeus " << ex.what();
	}

	
	return 0;
}

void suoritaAja(Ckulkuvaline& vne)
{
	if (typeid(vne) == typeid(Cvene))
		cout << "VENEOLIO" << endl;
	if (typeid(vne) == typeid(Cauto))
		cout << "AUTO-OLIO" << endl;

	vne.aja();
}

