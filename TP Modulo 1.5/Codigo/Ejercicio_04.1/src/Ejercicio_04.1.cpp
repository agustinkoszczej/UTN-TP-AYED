//============================================================================
// Name        : Ejercicio_04.1.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_04.1
//============================================================================

#include <iostream>
using namespace std;

int indexOfN(
      string s, char c, int n)
{
   int i, cont = 0;
   for(i = 0; s[i]!='\0'; i++)
   {
      if(s[i]==c)
      {
         cont++;
         if(cont==n)
            return i;
      }
   }
   return -1;
}
int main()
{
   cout<<"Ingrese una cadena, un caracter y un numero:"<<endl;
   string s;
   char c;
   int n;
   cin>>s>>c>>n;

   if(indexOfN(s,c,n)==-1)
      cout<<"La "<<n<<"º ocurrencia del caracter '"<<c<<"' no se encuentra en la cadena '"<<s<<"' "<<endl;
   else
      cout<<"La "<<n<<"º ocurrencia del caracter '"<<c<<"', de la cadena '"<<s<<"' es en la posicion "<<indexOfN(s,c,n)<<endl;

   return 0;
}
