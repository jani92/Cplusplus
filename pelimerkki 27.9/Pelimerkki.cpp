
#include <iostream>
#include "Merkki.h"

using namespace std;


int main()
{
   
   Sijainti s;
   s.x = 10;
   s.y = 10;
   Merkki m("*", s);
   m.Piirra();
   Sijainti s2;
   s2.x = 20;
   s2.y = 15;
   Merkki m2("@", s2);
   
   m2.Piirra();

   Merkki m3("$", Sijainti(17,17));
   m3.Piirra();

   
   Merkki m5("!", Sijainti(5, 20));
   m5.Piirra();

   Merkki m4 = m2 + m3;
   m4.MuutaSijainti(10, 20);
   m4.Piirra();
   

   Merkki m7(m5); //tehdään kopio m5 oliosta kutsutaan copy constractoria
   m7.MuutaSijainti(14, 20);
   m7.Piirra();
   Merkki m8 = m5; //tämäkin kutsuu copy constractoria
   m8.MuutaSijainti(17, 20);
   m8.Piirra();
   Merkki m6("", Sijainti(30, 40));
   m6.Piirra();
   return 0;
}