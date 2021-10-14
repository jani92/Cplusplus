#pragma once
#include "Henkilo.h"

using namespace std;

class Opiskelija : public Henkilo
{
private:
   int opiskelijanumero;
public:
   Opiskelija(int tunnro, int opiskelijanumero, string nimi);
   void TulostaTiedot();
};

