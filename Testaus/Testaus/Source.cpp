#include "Tyontekija.h"
#include <iostream>


using namespace std;

struct Lentokone
{
	string merkki;
	string tyyppi;
	inline void TulostaTiedot() {
		cout << "Lentokoneen merkki:" << this->merkki << " ja tyyppi:" << this->tyyppi << endl;
	}

};

void TulostaTiedot(const Lentokone& vLe);
void TulostaTiedot(Lentokone* pLe);

int main()
{
	Tyontekija tt("t1111");
	tt.TulostaTiedot();
	Lentokone le;
	le.merkki = "Cessna";
	le.tyyppi = "pienkone";
	TulostaTiedot(le);
	Lentokone le2 = { "Boeing 747", "matkustajakone" };
	TulostaTiedot(le2);
	Lentokone* le3 = new Lentokone({ "Mig", "sotakone" });
	TulostaTiedot(le3);
	le3->TulostaTiedot();
	delete le3;

	double* parvo = 0; //esitell‰‰n osoitinmuuttuja (osoitin double tyyp. tietoon)
	parvo = new double(100.0); //asetetaan arvo ja varataan muistiin
	cout << "parvon arvo:" << *parvo << endl; //tulostetaan sis‰ltˆ

	delete parvo; //vapautetaan muisti parvon osalta
	parvo = 0; //nullataan osoitin

	char* pmerkkijono = new char[20];
	cout << "Syota merkkijono:" << endl;
	cin.getline(pmerkkijono, 20, '\n');

	cout << "pmerkkijono: " << pmerkkijono << ", 10.kirjain: " << pmerkkijono[9] << endl;

	delete[] pmerkkijono;
	pmerkkijono = 0;

	
	char kaksulott_taulukko[][30]{ "eka alkio", "toka alkio", "kolmas alkio" };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			cout << kaksulott_taulukko[i][j] ;
		}
		cout << endl;
	}

	/*C++:ssa taulukkomuuttuja osoittaa ensimm‰iseen alkioon*/
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