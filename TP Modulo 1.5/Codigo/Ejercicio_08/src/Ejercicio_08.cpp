//============================================================================
// Name        : Ejercicio_08.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_08
//============================================================================

#include <iostream>
using namespace std;

int length(
      string s)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
      ;
   return i;
}

string insertAt(
      string s, char c, int i)
{
   string s2;

   for(int j = 0; j<length(s); j++)
   {
      if(j!=i)
         s2 += s[j];
      else
      {
         s2 += c;
         i -= 2;
         j--;
      }
   }

   return s2;
}

int main()
{
   cout<<"Ingrese una cadena, un caracter y posicion a insertar:"<<endl;
   string s;
   char c;
   int i;
   cin>>s>>c>>i;

   cout<<"La cadena quedo: '"<<insertAt(s,c,i)<<"'"<<endl;

   return 0;
}
