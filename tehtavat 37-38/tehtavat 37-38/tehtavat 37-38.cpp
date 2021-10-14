// tehtavat 37-38.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "CAuto.h"
#include "Henkilo.h"
#include <iostream>
#include <string>
using namespace std;

void tulosta(char* sana)
{

    for (int a = 4; sana[a] > '\0'; a--)
    {
        cout << sana[a];
        

    }
};

struct pallo {

    
    double sade = 0;
    
    
    struct keskipiste {
        int x = 0;
        int y = 0;
       
    };
    inline void tulostaa()
    {
        cout << "pallon sade on: " << this->sade << endl;
        cout << "pallon keskipisteen x koordinaatti: " << this->k1.x << endl;
        cout << "pallon keskipisteen y koordinaatti: " << this->k1.y << endl;

    }
    keskipiste k1;
    
};

int main()
{
    
  char word[]{ "koira" };

    tulosta(word);
    cout << "\n";

    pallo p1;
    p1.sade = 3.5;
    p1.k1.x = 7;
    p1.k1.y = 4;
    p1.tulostaa();

    Henkilo hh;
    hh.TietojenSyotto("Ville", 33, 3400);
    hh.TietojenTulostus();
    hh.NimenSyotto("Kake");
    hh.IanSyotto(50);
    hh.PalkanSyotto(4000);

    hh.NimenTulostus();
    hh.IanTulostus();
    hh.PalkanTulostus();
    hh.TietojenTulostus();

    CAuto aa;
    aa.AutonTietojenSyotto("ABC-567", 1999, "Honda");
    aa.RekNronTulostus();
    aa.RekNronSyotto("BDE-999");
    aa.RekNronTulostus();
    aa.AutonTietojenTulostus();
    
    return 0;
}