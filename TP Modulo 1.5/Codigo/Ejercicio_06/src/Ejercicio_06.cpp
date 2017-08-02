//============================================================================
// Name        : Ejercicio_06.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_06
//============================================================================

#include <iostream>
using namespace std;

int replace(
      string& s, char oldChar, char newChar)
{
   int i, cont = 0;
   for(i = 0; s[i]!='\0'; i++)
   {
      if(s[i]==oldChar)
      {
         s[i] = newChar;
         cont++;
      }
   }
   return cont;
}
int main()
{
   cout<<"Ingrese una cadena, un caracter para reemplazar y caracter nuevo:"<<endl;
   string s;
   char oldChar, newChar;
   cin>>s>>oldChar>>newChar;

   cout<<"La cadena quedo: '"<<s<<"' y se reemplazaron "<<replace(s,oldChar,newChar)<<" caracteres"<<endl;

   return 0;
}
