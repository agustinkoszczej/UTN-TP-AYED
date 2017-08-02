//============================================================================
// Name        : Ejercicio_24.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_24
//============================================================================

#include <iostream>

using namespace std;

bool isDigit(
      char c)
{
   if((c>='0')&&(c<='9'))
      return true;
   else
      return false;
}

int main()
{
   cout<<"Ingrese un caracter:"<<endl;
   char c;
   cin>>c;
   if(isDigit(c))
   {
      cout<<"El caracter es un numero"<<endl;
   }
   else
   {
      cout<<"El caracter no es un numero"<<endl;
   }
   return 0;
}
