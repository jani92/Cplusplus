// Viittaukset_ja_osoittimet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
void muutaNumero(int& arvo); //funktion muutaNumero prototyyppi
void  muutaNumero(int* arvo); //funktion muutaNumero prototyyppi
int KerroKymmenella(int arvo);

int main()
{
	int numero = 10;
	cout << "viittausparametrillä" << endl;
	cout << "numeron arvo on:" << numero << endl;

	muutaNumero(numero);

	cout << "numeron arvo nyt on:" << numero << endl;

	int numero2 = 30;

	cout << "osoitinparametrillä" << endl;
	cout << "numeron arvo on:" << numero2 << endl;

	muutaNumero(&numero2);

	cout << "numeron arvo nyt on:" << numero2 << endl;

	numero = KerroKymmenella(numero);
}

//esimerkki viittausparametristä
void muutaNumero(int& arvo) 
{
	arvo += 10;
	
}

//esimerkki osoitinparametrin käytöstä
void muutaNumero(int* arvo)
{
	*arvo += 10;
	
}

int KerroKymmenella(int arvo)
{

	return arvo * 10;
}


