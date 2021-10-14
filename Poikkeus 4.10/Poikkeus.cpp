// Poikkeus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<iostream>
//#include<exception>
//#include<cstdio>
using namespace std;

class Poikkeus
{
public:

	Poikkeus(const char* pMjono = "ongelma") : pViesti(pMjono)
	{
	}

	const char *what() const
	{
		return pViesti;
	}
private:
	const char* pViesti;
};

int main()
{
	for (int i = 0; i < 5; i++)
	{
		try
		{
			if (i == 0)
				throw Poikkeus();
			if (i<4)
				throw Poikkeus("Pikku vika");
			else
				throw Poikkeus("Ohjelmasi ei toimi");
		}
		catch (const Poikkeus& t)
		{
			cout << endl << "poikkeus:" << t.what();
			cout << endl;
		}
	}
	return 0;
}
