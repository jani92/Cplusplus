// vene.h: interface for the Cvene class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_VENE_H__0D7CFF65_6189_11D5_ADA8_0004ACE3C3EA__INCLUDED_)
#define AFX_VENE_H__0D7CFF65_6189_11D5_ADA8_0004ACE3C3EA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "kulkuvaline.h"

class Cmoottori;
class Cvene : public Ckulkuvaline  
{
public:
	void aja();
	Cvene(int nopeus);
	Cvene();
	virtual ~Cvene();

protected:
	Cmoottori* veneenkone;
};

#endif // !defined(AFX_VENE_H__0D7CFF65_6189_11D5_ADA8_0004ACE3C3EA__INCLUDED_)
