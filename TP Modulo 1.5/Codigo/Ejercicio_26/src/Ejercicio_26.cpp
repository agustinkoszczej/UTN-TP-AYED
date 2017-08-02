//============================================================================
// Name        : Ejercicio_26.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_26
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

int length(
      string s)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
      ;
   return i;
}

bool isDigit(
      char c)
{
   if((c>='0')&&(c<='9'))
      return true;
   else
      return false;
}

int stringToIntN(
      string s, int n)
{
   int v = 0, j = 0, x;

   for(int i = length(s)-1; i>=0; i--)
   {
      if(isDigit(s[i]))
      {
         x = '0';
      }
      else
      {
         x = 'A'-10;
      }
      v += (s[i]-x)*pow(n,j);
      j++;
   }

   return v;
}

int main()
{
   cout<<"Ingrese una cadena y la base:"<<endl;
   string s;
   int n;
   cin>>s>>n;

   cout<<"La cadena quedo: '"<<stringToIntN(s,n)<<"'"<<endl;

   return 0;
}
