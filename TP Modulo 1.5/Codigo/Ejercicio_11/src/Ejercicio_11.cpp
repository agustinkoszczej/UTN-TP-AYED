//============================================================================
// Name        : Ejercicio_11.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_11
//============================================================================

#include <iostream>
using namespace std;

string rtrim(
      string s)
{
   string s2;
   int i;

   for(i = 0; s[i]!='\0'; i++)
      ;
   i--;
   while((s[i]==' ')&&(i>=0))
   {
      i--;
   }
   for(int j = 0; j<=i; j++)
   {
      s2 += s[j];
   }
   return s2;
}

int main()
{
   cout<<"Ingrese una cadena:"<<endl;
   string s;
   cin>>s;
   cout<<"La cadena quedo: '"<<rtrim(s)<<"'"<<endl;

   return 0;
}
