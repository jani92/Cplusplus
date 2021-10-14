#pragma once
#include <string>
using namespace std;

class CAuto
{
private:
	string m_reknro;
	int m_vuosimalli;
	string m_merkki;

public:
	CAuto();
	~CAuto();
	
	void AutonTietojenSyotto(string reknro, int vuosimalli, string merkki);
	void RekNronSyotto(string reknro);
	void VuosimallinSyotto(int vuosimalli);
	void MerkinSyotto(string merkki);
	void RekNronTulostus();
	void VuosimallinTulostus();
	void MerkinTulostus();
	void AutonTietojenTulostus();

};