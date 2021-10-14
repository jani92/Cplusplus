#include <iostream>
#include "Työntekija.h"

using namespace std;

struct Lentokone
{
	string merkki;
	string tyyppi;

};
void TulostaTiedot(const Lentokone& vLe);
void TulostaTiedot(Lentokone* pLe);

int main() {
	Tyontekija tt("t1111");


	Lentokone le;
	le.merkki = "Cessna";
	le.tyyppi = "pienkone";
	TulostaTiedot(le);

	Lentokone le2 = { "Boieing 747", "matkustajakone" };
	TulostaTiedot(le2);
	Lentokone* le3 = new Lentokone({ "Mig", "sotakone" });
	TulostaTiedot(le3);

	double* parvo = 0; //esitellään osoitinmuuttuja (osoitin double tyyp. tietoon)
	parvo = new double(100.0);//asetetaan arvo ja varataan muistiin
	cout << "parvon arvo: " << *parvo << endl; //tulostetaan sisalto

	delete parvo; //vapautetaan muisti parvon osalta
	
	parvo = 0; //nullataan osoitin

	char* pmerkkijono = new char[20];
	cout << "Syota merkkijono:" << endl;

	cin.getline(pmerkkijono, 20, '\n');

	cout << "pmerkkijono: " << pmerkkijono << ", 10.kirjain: " << pmerkkijono[9] << endl;
	

	delete[] pmerkkijono;
	pmerkkijono = 0;

	char kaksulott_taulukko[][13]{ "eka alkio", "toka alkio", "kolmas alkio" };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			cout << kaksulott_taulukko[i][j] << endl;
		}
	}

	struct Lentokone
	{
		string merkki;
		string tyyppi;

	};

	return 0;
}

void TulostaTiedot(const Lentokone& vLe)

{

	cout << "kutsutaan viittausparametreilla" << endl;

	cout << "merkki:" << vLe.merkki << " ja tyyppi:" << vLe.tyyppi << endl;

}


void TulostaTiedot(Lentokone* pLe)

{

	cout << "kutsutaan osoitinparametreilla" << endl;

	cout << "merkki:" << pLe->merkki << " ja tyyppi:" << pLe->tyyppi << endl;

}