//============================================================================
// Name        : Ejercicio_20.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_20
//============================================================================

#include <iostream>

using namespace std;

bool isUpperCase(
      char c)
{
   if((c>='A')&&(c<='Z'))
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
   if(isUpperCase(c))
   {
      cout<<"El caracter es una letra mayuscula"<<endl;
   }
   else
   {
      cout<<"El caracter no es una letra mayuscula"<<endl;
   }
   return 0;
}
