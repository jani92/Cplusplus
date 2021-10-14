#include <iostream>
#include "Frendi.h"
#include "Luokka.h"
#include "CToinenLuokka.h"
	
using namespace std;
void main()
{
	CFrendi f;
	f.HakuAmmunta();
	CLuokka l;
	l.LissaaLkm();

	l.AlustaStattinenJasenMuuttuja(3);
	CLuokka::LisaaDoll(); //kutsuu julkista staattista metodia
	CToinenLuokka tl;
	tl.KutsuToinen();
	
}
