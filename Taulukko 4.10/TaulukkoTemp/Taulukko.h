#include <stdexcept>
#pragma once

using namespace std;
template <typename T>
class Taulukko
{
private:
	T * alkiot;
	size_t koko;
public:
	explicit Taulukko<T>(size_t taulKoko) { alkiot = new T[taulKoko]; };
	Taulukko(const Taulukko<T>& aTaul);
	~Taulukko<T>() { delete[] alkiot; };
	T& operator[](long indeksi);
	const T& operator[](long indeksi) const;
	Taulukko<T>& operator=(const Taulukko<T>& rhs);
};
template <typename T>
Taulukko<T>::Taulukko(const Taulukko<T>& aTaul)
{
	koko = aTaul.alkiot;
	alkiot = new T[koko];
	for (int i = 0; i < koko; i++)
		alkiot[i] = aTaul;
}

	template <typename T>
	const T& Taulukko<T>::operator[](long indeksi) const
	{
		if ((indeksi < 0 || indeksi >= (long)koko) && koko > 0)
			throw out_of_range(indeksi < 0 ? "Negatiivinen indeksi" : "Indeksi liian suuri");
		return alkiot[indeksi];
	}

	template <typename T>
	Taulukko<T>& Taulukko<T>::operator=(const Taulukko& rhs)
	{
		if (&rhs == this)
			return *this;

		if (alkiot)
			delete[] alkiot;

		koko = rhs.koko;
		alkiot = new T[rhs.koko];
		for (int i = 0; i < koko; i++)
			alkiot[i] = rhs.alkiot[i];
	}
	//indeksointioperaattori
	template <typename T>
	T& Taulukko<T>::operator[](long indeksi)
	{
		if ((indeksi < 0 || indeksi >= (long)koko) && koko > 0)
			throw out_of_range(indeksi < 0 ? "Negatiivinen indeksi" : "Indeksi liian suuri");
		return alkiot[indeksi];
	}


