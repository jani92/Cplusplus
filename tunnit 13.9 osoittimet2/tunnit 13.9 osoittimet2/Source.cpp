#include <iostream>


using namespace std;

int muutaNumero(int& arvo); //funktion muutaNumero prototyyppi

int muutaNumero(int* arvo); //funktion muutaNumero prototyyppi

int KerroKymmenella


int main()

{

	int numero = 10;

	cout << "viittausparametrillä" << endl;

	cout << "numeron arvo on:" << numero << endl;


	cout << "muutettu numero: " << muutaNumero(numero) << endl;


	cout << "numeron arvo nyt on:" << numero << endl;


	int numero2 = 30;


	cout << "osoitinparametrillä" << endl;

	cout << "numeron arvo on:" << numero2 << endl;


	cout << "muutettu numero: " << muutaNumero(&numero2) << endl;


	cout << "numeron arvo nyt on:" << numero2 << endl;

}


//esimerkki viittausparametristä

int muutaNumero(int& arvo)

{

	arvo += 10;

	return arvo;

}


//esimerkki osoitinparametrin käytöstä

int muutaNumero(int* arvo)

{

	*arvo += 10;

	return *arvo;

}