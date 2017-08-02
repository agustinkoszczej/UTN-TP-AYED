//============================================================================
// Name        : Ejercicio_30.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_30
//============================================================================

#include <iostream>

using namespace std;

string getTokenAt(
      string s, char sep, int i)
{
   int k = -1;
   string s2;
   for(int j = 0; (s[j]!='\0')&&(k!=i); j++)
   {
      if((s[j]==sep)||(s[j]=='\0'))
      {
         k++;
      }
      if((k+1==i)&&(s[j]!=sep))
      {
         s2 += s[j];
      }
   }
   return s2;
}

int main()
{
   cout<<"Ingrese una cadena, el separador y la posicion"<<endl;
   string s;
   char sep;
   int n;
   cin>>s>>sep>>n;

   cout<<"La cadena quedo: "<<getTokenAt(s,sep,n)<<endl;

   return 0;
}
