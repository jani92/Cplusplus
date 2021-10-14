// tehtavat 38-39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "CAuto.h"
#include "CKuormaAuto.h"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
#include <utility>
#include <map>

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
    mappi.insert(eka);
    mappi.insert(toka);
    mappi.insert(kolmas);
    mappi.insert(neljas);
    mappi.insert(viides);
    map <string, int>::iterator i;

    for (map <string, int>::iterator i = mappi.begin(); i != mappi.end(); i++) {
        cout << "Tulostetaan mapista (keyfield nimi) iteraattoria kayttaen" << "\n" << "Nimi: " << (i)->first << "\n" << "Ika: " << (i)->second << endl;
    }

    map <int, string> mappi2;
    pair<int, string> eka1 (11, "koira");
    pair<int, string> eka2(77, "boira");
    pair<int, string> eka3(15, "noira");
    pair<int, string> eka4(111, "toira");
    pair<int, string> eka5(1, "soira");
    mappi2.insert(eka1);
    mappi2.insert(eka2);
    mappi2.insert(eka3);
    mappi2.insert(eka4);
    mappi2.insert(eka5);

    for (map <int, string>::iterator i = mappi2.begin(); i != mappi2.end(); i++) {
        cout << "Tulostetaan mapista (keyfield ika) iteraattoria kayttaen" << "\n" << "Nimi: " << (i)->first << "\n" << "Ika: " << (i)->second << endl;
    }

    return 0;
}



