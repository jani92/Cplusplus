// osoitin_esimerkki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    long numero = 12345;
    long* pnumero = &numero; //sijoitetaan numeron osoite osoittimeen pnumero
    /*merkkijonoliteraalin käyttö :
    nimi -muuttujassa sijaitsee ensimmäisen merkin osoite*/
    const char* nimi = "Aku Ankka";
    const char* kurssit[] = {
        "C++",
        "Web-ohjelmointi",
        "Tietokonejarjestelmat"
    };
    int valinta = 0;

    cout << "Anna numero, kuinka mones alkio tulostetaan:" << endl;
    
    cin >> valinta;

	if (valinta >= 1 && valinta <= 3)                    
       cout << "valitsit: " << kurssit[valinta - 1] << endl;
    else
       cout << "valitse vain 1 - 3" << endl;
    
    cout << "Muuttujan numero arvo on: " << *pnumero << endl;

    *pnumero += 100;

    cout << "Muuttujan numero arvo on: " << numero << endl;

    cout << "Muuttuja on osoitteessa(pnumero):" << pnumero << endl;
    cout << "Muuttuja on osoitteessa(&numero):" << &numero << endl;

    cout << "nimi on: " << nimi << endl;
  
}


