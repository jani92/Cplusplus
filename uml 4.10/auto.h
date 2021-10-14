// auto.h: interface for the Cauto class.
//
//////////////////////////////////////////////////////////////////////



#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "kulkuvaline.h"
#include "kori.h"
#pragma once

//class Ckori;
class Cmoottori;
class Cauto : public Ckulkuvaline  
{
public:
	void vaihda(int vaihde);
	void aja();
	Cauto(int nopeus);
	void varoita(char* str);
	
	Cauto();
	virtual ~Cauto();

protected:
	Cmoottori* autonkone;
	Ckori kori; //composition
};

