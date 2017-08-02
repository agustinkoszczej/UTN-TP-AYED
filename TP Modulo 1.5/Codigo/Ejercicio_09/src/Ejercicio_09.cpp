//============================================================================
// Name        : Ejercicio_09.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_09
//============================================================================

#include <iostream>
using namespace std;

string removeAt(
      string s, int i)
{
   string s2;

   for(int j = 0; s[j]!='\0'; j++)
   {
      if(j!=i)
         s2 += s[j];
   }

   return s2;
}

int main()
{
   cout<<"Ingrese una cadena y posicion a remover:"<<endl;
   string s;
   int i;
   cin>>s>>i;

   cout<<"La cadena quedo: '"<<removeAt(s,i)<<"'"<<endl;

   return 0;
}
