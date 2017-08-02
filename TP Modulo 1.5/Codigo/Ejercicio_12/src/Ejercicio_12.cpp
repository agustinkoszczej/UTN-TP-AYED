//============================================================================
// Name        : Ejercicio_12.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_12
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

string trim(
      string s)
{
   return ltrim(rtrim(s));
}

int main()
{
   cout<<"Ingrese una cadena:"<<endl;
   string s;
   cin>>s;
   cout<<"La cadena quedo: '"<<trim(s)<<"'"<<endl;

   return 0;
}
