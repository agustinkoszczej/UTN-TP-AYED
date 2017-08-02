//============================================================================
// Name        : Ejercicio_30.2.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_30.2
//============================================================================

#include <iostream>

using namespace std;

int length(
      string s)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
      ;
   return i;
}

void addToken(
      string& s, string t, char sep)
{
   if((s[length(s)-1]==sep)||(length(s) == 0))
   {
      s += t;
   }
   else
   {
      s += sep+t;
   }

}

int main()
{
   cout<<"Ingrese una cadena, lo que desea agregar y el separador"<<endl;
   string s, t;
   char sep;
   cin>>s>>t>>sep;

   addToken(s,t,sep);
   cout<<"La cadena quedo: "<<s<<endl;

   return 0;
}
