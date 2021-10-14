#include <iostream>
#pragma once
using namespace std;
//Ivor Horton: Inside C++, esimerkki Taulukko<T>
template <typename T>
class Taulukko
{
private:
	T * alkiot; //T-tyyppinen taulukko
	size_t koko; //taulukon alkioiden lukum��r�
public:
	explicit Taulukko<T>(size_t taulKoko);//eksplisiittinen muodostin
	Taulukko(const Taulukko<T>& aTaul); //kopiomuodostin

	~Taulukko();
	T& operator[](long indeksi); //indeksointioperaattori
	const T& operator[](long indeksi) const; //indeksointioperaattori (const)
	Taulukko& operator=(const Taulukko& rhs); //sijoitusoperaattori
};

template <typename T>
Taulukko<T>::Taulukko(size_t taulKoko)
{
	//esim. alkiot = new int[10];
	alkiot = new T[taulKoko];
}

template <typename T>
Taulukko<T>::Taulukko(const Taulukko<T>& aTaul)
{
	this->koko = aTaul.koko; //t�m�n olion koko samaksi kuin parametrina olevan
	this->alkiot = new T[koko]; //t�m�n olion taulukko ladataan koko suuruiseksi
	for (size_t i = 0; i < koko; i++)
	{
		this->alkiot[i] = aTaul[i]; //t�m�n olion taulukon alkiot kopioidaan parametrina olevasta oliosta
	}

}

template <typename T>
Taulukko<T>::~Taulukko()
{
	//tuhotaan muistista alkiot
	delete[] alkiot;
}


//indeksointioperaattori
template <typename T>
T& Taulukko<T>::operator[](long indeksi)
{
	if ((indeksi < 0 || indeksi >= (long)koko) && koko > 0)
		throw out_of_range(indeksi < 0 ? "Negatiivinen indeksi" : "Indeksi liian suuri");
	return alkiot[indeksi];
}

template <typename T>
const T& Taulukko<T>::operator[](long indeksi) const
{
	if ((indeksi < 0 || indeksi >= (long)koko) && koko > 0)
		throw out_of_range(indeksi < 0 ? "Negatiivinen indeksi" : "Indeksi liian suuri");
	return alkiot[indeksi];
}

/*
Esim. 
Taulukko<int> t1;
... ..
Taulukko<int> t2 = t1;
*/

template <typename T>
Taulukko<T>& Taulukko<T>::operator=(const Taulukko& rhs)
{
	if (&rhs == this) //onko olio sama? 
		return *this;

	if (alkiot) //tämän -taulukon alkiot ovat muistissa, vapauta muisti
		delete[] alkiot;

	this->koko = rhs.koko; //kopioi tämän taulukon koko ao. olion sisällöksi
	this->alkiot = new T[rhs.koko]; //kopioi tämän taulukon alkioille tila
	for (int i = 0; i < koko; i++)
		this->alkiot[i] = rhs.alkiot[i]; //kopioi tämän taulukon alkioiden sisällön
}