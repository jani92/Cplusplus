#include "Opiskelija.h"
#include <iostream>

using namespace std;

Opiskelija::Opiskelija(int tunnro, int opiskelijanumero, string nimi) : Henkilo(tunnro,nimi)
{
   this->opiskelijanumero = opiskelijanumero;
   
   //this->nimi = nimi; //jos haluaisin k‰ytt‰‰ protected j‰seni‰ kantaluokasta
}

void Opiskelija::TulostaTiedot()
{
   cout << "opiskelijanumero on: " << this->opiskelijanumero << " ja nimi on:" << this->nimi << endl;
}
