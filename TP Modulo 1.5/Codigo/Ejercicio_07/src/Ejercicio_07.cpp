//============================================================================
// Name        : Ejercicio_07.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_07
//============================================================================

#include <iostream>
using namespace std;

string substring(
      string s, int i, int j)
{
   string s2 = "";
   for(int k = i; k<j; k++)
   {
      s2 += s[k];
   }
   return s2;
}
int main()
{
   cout<<"Ingrese una cadena y posicion desde y hasta donde quiere mostrar:"<<endl;
   string s;
   int d, h;
   cin>>s>>d>>h;

   cout<<"La cadena quedo: '"<<substring(s,d,h)<<"'"<<endl;

   return 0;
}
