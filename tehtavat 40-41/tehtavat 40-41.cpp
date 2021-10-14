// tehtavat 38-39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "CAuto.h"
#include "CKuormaAuto.h"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <iterator>
#include <utility>
using namespace std;

int main()
{

    CKuormaAuto aa("ABC-567", 1999, "SISU", 20000);

    aa.TietojenSyotto("UYT-777", 2015, "MAN", 50000);
    
    CKuormaAuto bb("XXX-666", 2003, "VOLVO", 90000);


    CAuto cc("CCC-666", 2011, "Ford");
    CAuto cc1 = cc;
    CAuto cc2 = cc + cc1;
    CAuto cc3("FFF-777", 1998, "Mazda");


    list <CAuto> lista;
    lista.push_back(cc);
    lista.push_back(cc3);
    for (list<CAuto>::iterator i = lista.begin(); i != lista.end(); i++) {
    (i)->AutonTietojenTulostus();
    }

    lista.reverse();
    for (list<CAuto>::iterator i = lista.begin(); i != lista.end(); i++) {
        (i)->AutonTietojenTulostus();
    }

    lista.remove(cc3);
    for (list<CAuto>::iterator i = lista.begin(); i != lista.end(); i++) {
        (i)->AutonTietojenTulostus();
    }
    
    pair <string, int> eka ("Pekka", 55);
    pair <string, int> toka ("Kullervo", 78);
    pair <string, int> kolmas("Kalle", 44);
    pair <string, int> neljas("Petteri", 99);
    pair <string, int> viides("Jarmo", 66);
    
    cout << "Nimi: " << eka.first << "\n" << "Ika: " << eka.second << endl;
    cout << "Nimi: " << toka.first << "\n" << "Ika: " << toka.second << endl;

    vector <pair<string, int>> testi;
    testi.push_back(eka);
    testi.push_back(toka);

    for (vector <pair<string, int>>::iterator i = testi.begin(); i != testi.end(); i++) {
        cout <<"Tulostetaan vektorista iteraattoria kayttaen" << "\n" << "Nimi: " << (i)->first << "\n" << "Ika: " << (i)->second << endl;
    }
    map <string, int> mappi;
    mappi.push_back(eka, toka, kolmas, neljas, viides);
    map <string, int>::iterator iterator;
    for (map <pair<string, int>>::iterator i = mappi.begin(); i != mappi.end(); i++) {
        cout << "Tulostetaan vektorista iteraattoria kayttaen" << "\n" << "Nimi: " << (i)->first << "\n" << "Ika: " << (i)->second << endl;
    }

    pair<iterator, iterator> vastaus;
    /*vastaus = mappi.equal_range("Kalle");
    for (iterator i = vastaus.first; i != vastaus.second; ++i) {
        cout << i->second;
    }*/
    return 0;
}



