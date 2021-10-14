// auto.cpp: implementation of the Cauto class.
//

//////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "auto.h"
#include "moottori.h"
#include "kulkuvaline.h"
#include "kori.h"
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Cauto::Cauto() { 
	this->autonkone = NULL;
}
Cauto::~Cauto() {
	delete autonkone;
}





void Cauto::varoita(string str)
{
	cout << "varoitus autosta: " << str.c_str() << endl;
}


Cauto::Cauto(int nopeus) //mainin 50kmh
{
	autonkone = new Cmoottori(this, nopeus);
	//aja();
	
}


void Cauto::aja()
{
int vaihde;
int lisa=20;
cout<<"Nyt ajetaan autolla "<<endl;
for ( vaihde=1; vaihde < 6; vaihde++)
{
  vaihda(vaihde);
  autonkone->kaasuta(lisa);
  lisa+=40;
}

}

void Cauto::vaihda(int vaihde)
{

cout<<"Nyt ajetaan "<<vaihde<<" vaihteella"<<endl;
}
