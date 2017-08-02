//============================================================================
// Name        : Ejercicio_02.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_02
//============================================================================

#include <iostream>
using namespace std;

bool isEmpty(
      string s)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
      ;
   if(i==0)
      return true;
   else
      return false;
}
int main()
{
   cout<<"Ingrese una cadena:"<<endl;
   string s;
   cin>>s;

   if(isEmpty(s))
      cout<<"No hay caracteres en la cadena";
   else
      cout<<"Hay caracteres en la cadena";

   return 0;
}
