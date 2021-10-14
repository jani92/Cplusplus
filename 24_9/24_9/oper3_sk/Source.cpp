#include <iostream>
#include <string>
#include "CKuutio.h"
using namespace std;
string bool2str(bool b) { return b ? "true" : "false"; }

int main()
{
   CKuutio sk1(2, 3, 4);
   CKuutio sk2(3, 4, 5);

   cout << bool2str(sk1 < sk2) << endl;
   cout << bool2str(sk2 < sk1) << endl;

   return 0;
}

