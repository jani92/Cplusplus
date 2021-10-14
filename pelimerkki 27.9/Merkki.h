#pragma once
#include <string>
using namespace std;

struct Sijainti {
   int x;
   int y;
   inline Sijainti(int ux, int uy) { this->x = ux; this->y = uy; }
   inline Sijainti() { this->x = 0; this->y = 0; }
};

class Merkki
{
private:
   string _merkki;
   Sijainti _sijainti;
   static Sijainti _cursorinsij;
public:
   Merkki();
   Merkki(string merkki, Sijainti sijainti);
   Merkki(const Merkki& m);
   Merkki operator+(const Merkki& m);
   void MuutaSijainti(int uusix,int uusiy);
   void Piirra();
};



