//============================================================================
// Name        : Ejercicio_04.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_04
//============================================================================

#include <iostream>
using namespace std;

int lastindexOf(
      string s, char c)
{
   int i, j;
   for(j = 0; s[j]!='\0'; j++)
      ;

   for(i = j; i>=0; i--)
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

   if(lastindexOf(s,c)==-1)
      cout<<"El caracter '"<<c<<"' no se encuentra en la cadena '"<<s<<"' "<<endl;
   else
      cout<<"La ultima ocurrencia del caracter '"<<c<<"', de la cadena '"<<s<<"' es en la posicion "<<lastindexOf(s,c)<<endl;

   return 0;
}
