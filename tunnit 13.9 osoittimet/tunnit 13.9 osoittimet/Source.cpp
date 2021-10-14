#include <iostream>
int muutaNumero(int& arvo);
using namespace std;
int main()
{
	long numero = 12345;
	long* pnumero = &numero; //sijoitetaan numeron osoite osoittimeen pnumero
	/*merkkijonoliteraalin kaytto :
	* nimi - muutujassa sijaitsee ensimmaisen merkin osoite*/
	cout << "Muuttujan numero arvo on " << *pnumero << endl;
	const char* nimi = "Aku Ankka";
	const char* kurssit[] = {
		"C++",
		"Web-ohjelmointi",
		"Tietokonejarjestelmat"
	};

	cout << "Anna numero, kuinka mones alkio tulostetaan:" << endl;
	int valinta = 0;

	cin >> valinta;

	if (valinta >= 0 && valinta <= 2)
	cout << "valitsit: " << kurssit[valinta] << endl;
	else
	cout << "valitse vain 1 - 3" << endl;

	*pnumero += 100;

	cout << "Muuttujan numero arvo on " << *pnumero << endl;

	cout << "Muuttuja on osoitteessa(pnumero): " << pnumero << endl;

	cout << "Muuttuja on osoitteessa(pnumero): " << &numero << endl;

	cout << "nimi on: " << nimi << endl;

	

}