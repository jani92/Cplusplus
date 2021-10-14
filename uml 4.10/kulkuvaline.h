// kulkuvaline.h: interface for the Ckulkuvaline class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_KULKUVALINE_H__0D7CFF63_6189_11D5_ADA8_0004ACE3C3EA__INCLUDED_)
#define AFX_KULKUVALINE_H__0D7CFF63_6189_11D5_ADA8_0004ACE3C3EA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream>
using namespace std;
class Ckulkuvaline  
{
public:
 
	virtual void aja() = 0;
	virtual void varoita(char *str) { cout << str; }
	Ckulkuvaline();
	virtual ~Ckulkuvaline();

};

#endif // !defined(AFX_KULKUVALINE_H__0D7CFF63_6189_11D5_ADA8_0004ACE3C3EA__INCLUDED_)
