// moottori.cpp: implementation of the Cmoottori class.
//
//////////////////////////////////////////////////////////////////////
#include "stdafx.h"

#include "moottori.h"
#include "auto.h"
#include "vene.h"
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Cmoottori::Cmoottori(){ }
Cmoottori::~Cmoottori(){ }

Cmoottori::Cmoottori(Cauto *a, int nopeus)
{
	kvaline = a;
	matkanopeus = nopeus;
}

void Cmoottori::kaasuta(int lisays)
{

while(matkanopeus < lisays)
	{
		matkanopeus++;
		cout << matkanopeus << '\t';
		
		if(matkanopeus > 80)
		{
			cout<<endl;
			
			if (typeid(*kvaline) == typeid(Cauto))
				((Cauto*)kvaline)->varoita("Sallittu ajonopeus saavutettu");
			else if (typeid(*kvaline) == typeid(Cvene))
				((Cvene*)kvaline)->varoita("Huippunopeus saavutettu");
			break;
		}
	}
cout<<endl;
}



Cmoottori::Cmoottori(Cvene *b, int nopeus)
{
	kvaline = b;
	matkanopeus = nopeus;
}
