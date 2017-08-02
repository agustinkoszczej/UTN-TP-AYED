//============================================================================
// Name        : Ejercicio_10.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_10
//============================================================================

#include <iostream>
using namespace std;

string ltrim(
      string s)
{
   string s2;
   int i = 0;
   while(s[i]==' ')
   {
      i++;
   }
   for(int j = i; s[j]!='\0'; j++)
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
   cout<<"La cadena quedo: '"<<ltrim(s)<<"'"<<endl;

   return 0;
}
