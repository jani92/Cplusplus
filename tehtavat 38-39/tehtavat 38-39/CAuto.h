#pragma once
#include <string>
using namespace std;

class CAuto
{
protected:
	string m_reknro;
	int m_vuosimalli;
	string m_merkki;
public:
	CAuto();
	~CAuto();
	CAuto(string reknro, int vuosimalli, string merkki);
	bool operator == (const CAuto& s) const { return m_reknro == s.m_reknro && m_vuosimalli == s.m_vuosimalli && m_merkki == s.m_merkki; }
	bool operator != (const CAuto& s) const { return !operator==(s); }

	void AutonTietojenSyotto(string reknro, int vuosimalli, string merkki);
	void RekNronSyotto(string reknro);
	void VuosimallinSyotto(int vuosimalli);
	void MerkinSyotto(string merkki);
	void RekNronTulostus();
	void VuosimallinTulostus();
	void MerkinTulostus();
	void AutonTietojenTulostus();
	CAuto(const CAuto& a);
	CAuto operator+(const CAuto& a);

};