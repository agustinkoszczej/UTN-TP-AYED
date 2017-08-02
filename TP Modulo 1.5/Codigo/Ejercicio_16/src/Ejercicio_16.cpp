//============================================================================
// Name        : Ejercicio_16.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_16
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

string rpad(
      string s, char c, int n)
{
   string s2 = s;

   for(int j = 0; j<(n-length(s)); j++)
   {
      s2 += c;
   }
   return s2;
}

int main()
{
   cout<<"Ingrese una cadena, un caracter y un numero:"<<endl;
   string s;
   char c;
   int n;
   cin>>s>>c>>n;
   cout<<"La cadena quedo: '"<<rpad(s,c,n)<<"'"<<endl;

   return 0;
}
