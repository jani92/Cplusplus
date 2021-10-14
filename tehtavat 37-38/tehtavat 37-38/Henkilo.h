#pragma once
#include <string>
using namespace std;

class Henkilo
{
private:
	string m_nimi;
	int m_ika;
	long m_palkka;

public:
	Henkilo();
	~Henkilo();
	
	void TietojenSyotto(string nimi, int ika, long palkka);
	void NimenSyotto(string nimi);
	void PalkanSyotto(long palkka);
	void IanSyotto(int ika);
	void NimenTulostus();
	void IanTulostus();
	void PalkanTulostus();
	void TietojenTulostus();
	
};