#include <iostream>


using namespace std;

int muutaNumero(int& arvo); //funktion muutaNumero prototyyppi

int muutaNumero(int* arvo); //funktion muutaNumero prototyyppi

int KerroKymmenella


int main()

{

	int numero = 10;

	cout << "viittausparametrill�" << endl;

	cout << "numeron arvo on:" << numero << endl;


	cout << "muutettu numero: " << muutaNumero(numero) << endl;


	cout << "numeron arvo nyt on:" << numero << endl;


	int numero2 = 30;


	cout << "osoitinparametrill�" << endl;

	cout << "numeron arvo on:" << numero2 << endl;


	cout << "muutettu numero: " << muutaNumero(&numero2) << endl;


	cout << "numeron arvo nyt on:" << numero2 << endl;

}


//esimerkki viittausparametrist�

int muutaNumero(int& arvo)

{

	arvo += 10;

	return arvo;

}


//esimerkki osoitinparametrin k�yt�st�

int muutaNumero(int* arvo)

{

	*arvo += 10;

	return *arvo;

}