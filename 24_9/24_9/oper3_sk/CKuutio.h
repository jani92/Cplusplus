#pragma once
class CKuutio //ts. tämän on kuutio
{
private:
   int pituus, leveys, korkeus;

public:
   inline CKuutio(int pit, int lev, int kork)
   {
      this->pituus = pit;
      this->leveys = lev;
      this->korkeus = kork;
   }

   int tilavuus();
};

inline bool operator<(CKuutio& sk1, CKuutio& sk2)
{
   return sk1.tilavuus() < sk2.tilavuus();
}