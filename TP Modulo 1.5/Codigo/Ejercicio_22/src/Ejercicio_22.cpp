//============================================================================
// Name        : Ejercicio_22.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_22
//============================================================================

#include <iostream>

using namespace std;

bool isLowerCase(
      char c)
{
   if((c>='a')&&(c<='z'))
   {
      return true;
   }
   else
   {
      return false;
   }
}

char toUpperCase(
      char c)
{
   if(isLowerCase(c))
   {
      return c-32;
   }
   else
   {
      return c;
   }
}

int main()
{
   cout<<"Ingrese un caracter:"<<endl;
   char c;
   cin>>c;
   cout<<"El caracter quedo '"<<toUpperCase(c)<<"'"<<endl;
   return 0;
}
