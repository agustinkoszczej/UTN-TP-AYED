//============================================================================
// Name        : Ejercicio_21.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_21
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

int main()
{
   cout<<"Ingrese un caracter:"<<endl;
   char c;
   cin>>c;
   if(isLowerCase(c))
   {
      cout<<"El caracter es una letra minuscula"<<endl;
   }
   else
   {
      cout<<"El caracter no es una letra minuscula"<<endl;
   }
   return 0;
}
