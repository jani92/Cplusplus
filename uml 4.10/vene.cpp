// vene.cpp: implementation of the Cvene class.
//
//////////////////////////////////////////////////////////////////////
#include<iostream>
#include "vene.h"
#include "moottori.h"
#include "auto.h"
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Cvene::Cvene()
{

}

Cvene::~Cvene()
{
	delete veneenkone;
}

Cvene::Cvene(int nopeus)
{
   veneenkone = new Cmoottori(this, nopeus);
	aja();
}

void Cvene::aja()
{
	cout<<"Nyt ajetaan veneella"<<endl;
	veneenkone ->kaasuta(90);

}
