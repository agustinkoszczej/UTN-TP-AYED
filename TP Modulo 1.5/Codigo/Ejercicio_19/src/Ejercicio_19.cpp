//============================================================================
// Name        : Ejercicio_19.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_19
//============================================================================

#include <iostream>

using namespace std;

bool isLetter(
      char c)
{
   if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
      return true;
   else
      return false;
}

int main()
{
   cout<<"Ingrese un caracter:"<<endl;
   char c;
   cin>>c;
   if(isLetter(c))
   {
      cout<<"El caracter es una letra"<<endl;
   }
   else
   {
      cout<<"El caracter no es una letra"<<endl;
   }
   return 0;
}
