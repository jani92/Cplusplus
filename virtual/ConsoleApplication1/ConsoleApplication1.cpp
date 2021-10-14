// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream> 
using namespace std;

class Kantaluokka
{
public:
	virtual void Nayta() { cout << 100 << endl; }
	virtual void PuhdasVirtMetodi() = 0; //Luokka on abstrakti
};

class JohdettuLuokka : public Kantaluokka
{
public:
	/*seuraava funktio kumoaa Kantaluokassa olevan Nayta-funktion*/
	void Nayta() { cout << 200 << endl; }
	void PuhdasVirtMetodi()
	{
		cout << "kutsutaan puhdasta virt. metodia" << endl;
	}
};

class JohdettuLuokka2 : public Kantaluokka
{
public:
	/*seuraava funktio kumoaa Kantaluokassa olevan Nayta-funktion*/
	void Nayta() { cout << 300 << endl; }
	void PuhdasVirtMetodi()
	{
		cout << "kutsutaan puhdasta toista virt. metodia" << endl;
	}
};
void Tulosta(Kantaluokka* kl)
{
	kl->Nayta();
	kl->PuhdasVirtMetodi();
}
int main()
{


	Kantaluokka* pKl1;  //osoitin kantaluokan olioon
	JohdettuLuokka pJl1;

	pKl1 = &pJl1;
	pKl1->Nayta(); //kutsuu johdetun luokan Nayta-metodia
	pKl1->PuhdasVirtMetodi();
	Tulosta(pKl1);

	Kantaluokka* pKl2;
	JohdettuLuokka2 pJl2;

	pKl2 = &pJl2;

	pKl2->PuhdasVirtMetodi();
	Tulosta(pKl2);


	return 0;
}

