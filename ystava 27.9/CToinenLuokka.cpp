#include "CToinenLuokka.h"
#include "Luokka.h"
#include <iostream>

using namespace std;

void CToinenLuokka::KutsuToinen()
{
   cout << "toista kutsuttu" << endl;

   CLuokka l;
   l.llkm = 10;
   cout << "CLuokka luokan yksityisen jasenmuuttujana llkm arvo: " << l.llkm << endl;
}
