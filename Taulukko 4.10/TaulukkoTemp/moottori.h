// moottori.h: interface for the Cmoottori class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MOOTTORI_H__0D7CFF66_6189_11D5_ADA8_0004ACE3C3EA__INCLUDED_)
#define AFX_MOOTTORI_H__0D7CFF66_6189_11D5_ADA8_0004ACE3C3EA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Ckulkuvaline;
class Cvene;
class Cauto;
class Cmoottori  
{
public:
	Cmoottori(Cvene *b, int nopeus);
	Cmoottori(Cauto *a, int nopeus);
	void kaasuta(int lisays);
	Cmoottori();
	virtual ~Cmoottori();

protected:

	int matkanopeus;
	Ckulkuvaline* kvaline;
	
};

#endif // !defined(AFX_MOOTTORI_H__0D7CFF66_6189_11D5_ADA8_0004ACE3C3EA__INCLUDED_)
