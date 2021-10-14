#pragma once
#include <string>
#include "CAuto.h"
using namespace std;

class CKuormaAuto : public CAuto
{
private:
	int maxkuormanpaino;
public:
	CKuormaAuto(string reknro, int vuosimalli, string merkki, int maxkuormanpaino);

	void KuormaAutonTietojenTulostus();
	void TulostaMaxkPaino();
	void TietojenSyotto(string reknro, int vuosimalli, string merkki, int maxkuormanpaino);
};