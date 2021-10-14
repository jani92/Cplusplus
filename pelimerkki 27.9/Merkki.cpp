#include "Merkki.h"
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include <iostream>
#include <iomanip>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

COORD CursorPosition;
Sijainti Merkki::_cursorinsij;
Merkki::Merkki()
{
   
   _sijainti.x = 0;
   _sijainti.y = 0;
   _cursorinsij.x = 0;
   _cursorinsij.y = 0;
}

Merkki::Merkki(string merkki, Sijainti sijainti)
{
   this->_merkki = merkki;
 
   this->_sijainti = sijainti;
}

Merkki::Merkki(const Merkki& m) //copy constructor
{
   this->_merkki = m._merkki;

   this->_sijainti = m._sijainti;
}

Merkki Merkki::operator+(const Merkki& m)
{
   Merkki merkki;
   merkki._merkki += this->_merkki + m._merkki;
   merkki._sijainti =m._sijainti; //sijainti on sama kuin kopioitavassa
   return merkki;
}

void Merkki::MuutaSijainti(int uusix, int uusiy)
{
   this->_sijainti.x = uusix;
   this->_sijainti.y = uusiy;
}

void Merkki::Piirra()
{
   /*int deltax =  this->_sijainti.x - (int)_cursorinsij.x;
   cout << setw((std::streamsize)deltax);
   _cursorinsij.x = this->_sijainti.x;*/
   

   CursorPosition.X = this->_sijainti.x;
   CursorPosition.Y = this->_sijainti.y;
   SetConsoleCursorPosition(console, CursorPosition);
   cout << this->_merkki;
}
