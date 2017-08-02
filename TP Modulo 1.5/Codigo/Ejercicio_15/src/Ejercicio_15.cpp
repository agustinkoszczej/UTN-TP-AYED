//============================================================================
// Name        : Ejercicio_15.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_15
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

string lpad(
      string s, char c, int n)
{
   string s2;

   for(int j = 0; j<(n-length(s)); j++)
   {
      s2 += c;
   }
   s2 += s;
   return s2;
}

int main()
{
   cout<<"Ingrese una cadena, un caracter y un numero:"<<endl;
   string s;
   char c;
   int n;
   cin>>s>>c>>n;
   cout<<"La cadena quedo: '"<<lpad(s,c,n)<<"'"<<endl;

   return 0;
}
