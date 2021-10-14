#include <iostream>
#include <string>
#include "Math.h"
using namespace std;

int main()

{
	cout << "Mika on nimesi?";
	string nimi;
	cin >> nimi;
	cout << "Mika on pituutesi?";
	int pituus;
	cin >> pituus;
	cout << "Nimesi on: " << nimi << "\n" << "Pituutesi on: " << pituus;
	if (pituus > 180)
		cout << " olet saatanan pitka" << endl;
	else if (pituus < 120)
		cout << " olet kaapio" << endl;
	else
		cout << " olet normaalin pituinen" << endl;

	cout << "Anna tyohuoneesi leveys: ";
	double leveys = 0.0;
	cin >> leveys;
	double korkeus = 0.0;
	cin >> korkeus;
	cout << "Seinan pinta-ala on: " << SuorKaidePintaAla(leveys, korkeus) << endl;
	return 0;
}