#include "CKuormaAuto.h"
#include "CAuto.h"
#include <iostream>
#include <string>
using namespace std;

CKuormaAuto::CKuormaAuto(string m_reknro, int m_vuosimalli, string m_merkki, int maxkuormanpaino) : CAuto(m_reknro, m_vuosimalli, m_merkki)
{
	this->maxkuormanpaino = maxkuormanpaino;
}
void CKuormaAuto::TietojenSyotto(string reknro, int vuosimalli, string merkki, int maxkuormanpaino)
{
	this->maxkuormanpaino = maxkuormanpaino;
	this->m_reknro = reknro;
	this->m_vuosimalli = vuosimalli;
	this->m_merkki = merkki;
}

void CKuormaAuto::TulostaMaxkPaino()
{
	cout << "Rekan maksimi kuorma: " << maxkuormanpaino << endl;
}
void CKuormaAuto::KuormaAutonTietojenTulostus() {
	cout << "Reknro: " << this->m_reknro << " Vuosimalli: " << this->m_vuosimalli << " Merkki: " << this->m_merkki << " Maksimi kuorma: " << this->maxkuormanpaino << endl;
}
