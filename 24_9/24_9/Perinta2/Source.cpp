#include <iostream>
#include "Opiskelija.h"

using namespace std;

int main()
{
   Opiskelija o1(1,2342345,"Aku Ankka");

   o1.TulostaTiedot();

   Opiskelija* o2 = new Opiskelija(2, 5433433, "Hessu Hopo"); //luodaan dynaamisesti muistiin o2

   o2->TulostaTiedot();

   delete o2; //poistetaan olio o2 muistista
   return 0;
}