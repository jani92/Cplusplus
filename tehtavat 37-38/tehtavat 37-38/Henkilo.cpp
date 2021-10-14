#include "Henkilo.h"
#include <iostream>
#include <string>
using namespace std;

Henkilo::Henkilo()
{
	
}
Henkilo::~Henkilo()
{

}

void Henkilo::TietojenSyotto(string nimi, int ika, long palkka)
{
	this->m_nimi = nimi;
	this->m_ika = ika;
	this->m_palkka = palkka;
}
void Henkilo::NimenSyotto(string nimi)
{
	this->m_nimi = nimi;
}
void Henkilo::IanSyotto(int ika)
{
	this->m_ika = ika;
}
void Henkilo::PalkanSyotto(long palkka)
{
	this->m_palkka = palkka;
}


void Henkilo::NimenTulostus()
{
	cout << "nimi: " << this->m_nimi << endl;
}
void Henkilo::IanTulostus()
{
	cout << "Ika: " << this->m_ika << endl;
}
void Henkilo::PalkanTulostus()
{
	cout << "palkka: " << this->m_palkka << endl;
}
void Henkilo::TietojenTulostus() {
	cout << "nimi: " << this->m_nimi << "\n" << "Ika: " << this->m_ika << "\n" << "palkka: " << this->m_palkka << endl;
}

