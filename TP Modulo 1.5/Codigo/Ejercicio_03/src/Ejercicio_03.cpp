//============================================================================
// Name        : Ejercicio_03.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_03
//============================================================================

#include <iostream>
using namespace std;

int indexOf(
      string s, char c)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
   {
      if(s[i]==c)
         return i;
   }
   return -1;
}
int main()
{
   cout<<"Ingrese una cadena y un caracter:"<<endl;
   string s;
   char c;
   cin>>s>>c;

   if(indexOf(s,c)==-1)
      cout<<"El caracter '"<<c<<"' no se encuentra en la cadena '"<<s<<"' "<<endl;
   else
      cout<<"La primera ocurrencia del caracter '"<<c<<"', de la cadena '"<<s<<"' es en la posicion "<<indexOf(s,c)<<endl;

   return 0;
}
