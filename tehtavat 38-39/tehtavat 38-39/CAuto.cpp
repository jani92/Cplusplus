#include "CAuto.h"
#include <iostream>
#include <string>
using namespace std;

CAuto::CAuto(string reknro, int vuosimalli, string merkki)
{
	this->m_reknro = reknro;
	this->m_vuosimalli = vuosimalli;
	this->m_merkki = merkki;
}
CAuto::CAuto()
{
	
}

CAuto::~CAuto()
{

}

void CAuto::AutonTietojenSyotto(string reknro, int vuosimalli, string merkki)
{
	this->m_reknro = reknro;
	this->m_vuosimalli = vuosimalli;
	this->m_merkki = merkki;
}
CAuto::CAuto(const CAuto& a)
{
	this->m_reknro = a.m_reknro;
	this->m_vuosimalli = a.m_vuosimalli;
	this->m_merkki = a.m_merkki;
}
CAuto CAuto::operator+(const CAuto& a)
{
	CAuto kk;
	kk.m_reknro += this->m_reknro + a.m_reknro;
	kk.m_vuosimalli = this->m_vuosimalli + a.m_vuosimalli;
	kk.m_merkki += this->m_merkki + a.m_merkki;
	return kk;
}
void CAuto::RekNronSyotto(string reknro)
{
	this->m_reknro = reknro;
}
void CAuto::VuosimallinSyotto(int vuosimalli)
{
	this->m_vuosimalli = vuosimalli;
}
void CAuto::MerkinSyotto(string merkki)
{
	this->m_merkki = merkki;
}


void CAuto::RekNronTulostus()
{
	cout << "Reknro: " << this->m_reknro << endl;
}
void CAuto::VuosimallinTulostus()
{
	cout << "Vuosimalli: " << this->m_vuosimalli << endl;
}
void CAuto::MerkinTulostus()
{
	cout << "Merkki: " << this->m_merkki << endl;
}
void CAuto::AutonTietojenTulostus() {
	cout << "Reknro: " << this->m_reknro << " Vuosimalli: " << this->m_vuosimalli << " Merkki: " << this->m_merkki << endl;
}
