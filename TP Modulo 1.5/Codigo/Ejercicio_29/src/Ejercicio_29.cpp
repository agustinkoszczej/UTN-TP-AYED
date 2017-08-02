//============================================================================
// Name        : Ejercicio_29.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_29
//============================================================================

#include <iostream>

using namespace std;

int tokenCount(
      string s, char sep)
{
   int j = 1;
   for(int i = 0; s[i]!='\0'; i++)
   {
      if(s[i]==sep)
      {
         j++;
      }
   }
   return j;
}

int main()
{
   cout<<"Ingrese una cadena y el separador"<<endl;
   string s;
   char sep;
   cin>>s>>sep;

   cout<<"La cadena tiene "<<tokenCount(s,sep)<<" tokens"<<endl;

   return 0;
}
