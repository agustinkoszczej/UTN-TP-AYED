//============================================================================
// Name        : Ejercicio_23.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_23
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

char toLowerCase(
      char c)
{
   if(isLowerCase(c) == false)
   {
      return c+32;
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
   cout<<"El caracter quedo '"<<toLowerCase(c)<<"'"<<endl;
   return 0;
}
