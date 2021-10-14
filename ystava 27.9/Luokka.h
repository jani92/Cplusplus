// Luokka.h: interface for the CLuokka class.
//
//////////////////////////////////////////////////////////////////////
#include "Frendi.h"
#include "CToinenLuokka.h"
#if !defined(AFX_LUOKKA_H__91F2BD0B_D7AD_4DD2_85E5_0A6938E28E7B__INCLUDED_)
#define AFX_LUOKKA_H__91F2BD0B_D7AD_4DD2_85E5_0A6938E28E7B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CLuokka  
{
friend class CFrendi; //luokka CFrendi voi k‰ytt‰‰ CLuokka -luokan yksit. j‰seni‰

public:
	void AlustaStattinenJasenMuuttuja(int dl){doll = dl;};
	static void LissaaLkm();
	static void LisaaDoll();
	void LisaaLkm();
	friend void CToinenLuokka::KutsuToinen();
	CLuokka();
	virtual ~CLuokka();
	
private:
	int llkm;
	void YstavanKutsu();
	static int doll;
};

#endif // !defined(AFX_LUOKKA_H__91F2BD0B_D7AD_4DD2_85E5_0A6938E28E7B__INCLUDED_)
