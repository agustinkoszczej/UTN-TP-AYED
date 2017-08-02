//============================================================================
// Name        : Ejercicio_05.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_05
//============================================================================

#include <iostream>
using namespace std;

bool contains(
      string s, char c)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
   {
      if(s[i]==c)
         return true;
   }
   return false;
}
int main()
{
   cout<<"Ingrese una cadena y un caracter:"<<endl;
   string s;
   char c;
   cin>>s>>c;

   if(contains(s,c))
      cout<<"El caracter '"<<c<<"' se encuentra en la cadena '"<<s<<"' "<<endl;
   else
      cout<<"El caracter '"<<c<<"' no se encuentra en la cadena '"<<s<<"' "<<endl;

   return 0;
}
