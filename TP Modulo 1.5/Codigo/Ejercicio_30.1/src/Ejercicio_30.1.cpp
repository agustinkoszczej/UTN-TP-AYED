//============================================================================
// Name        : Ejercicio_30.1.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_30.1
//============================================================================

#include <iostream>

using namespace std;

int findToken(
      string s, string t, char sep)
{
   string s2;
   int j = -1;

   for(int i = 0; s[i]!='\0'; i++)
   {
      if((s[i]!=sep)&&(s[i+1] != '\0'))
      {
         s2 += s[i];
      }
      else
      {
         if (s[i+1] == '\0'){
            s2 += s[i];
         }
         j++;
         if(s2==t)
         {
            return j;
         }
         s2 = "";
      }
   }
   return -1;
}

int main()
{
   cout<<"Ingrese una cadena, una cadena a buscar y el separador"<<endl;
   string s, t;
   char sep;
   cin>>s>>t>>sep;

   cout<<"La cadena a buscar se encuentra en la posicion: "<<findToken(s,t,sep)<<endl;

   return 0;
}
