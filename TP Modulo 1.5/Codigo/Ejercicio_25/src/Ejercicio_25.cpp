//============================================================================
// Name        : Ejercicio_25.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_25
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

int stringToInt(
      string s)
{
   int n = 0, j = 0;

   for(int i = length(s)-1; i>=0; i--)
   {
      n += (s[i]-'0')*pow(10,j);
      j++;
   }

   return n;
}

int main()
{
   cout<<"Ingrese una cadena:"<<endl;
   string s;
   cin>>s;

   cout<<"La cadena quedo: '"<<stringToInt(s)<<"'"<<endl;

   return 0;
}
