//============================================================================
// Name        : Ejercicio_32.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_32
//============================================================================

#include <iostream>

using namespace std;

string reversa(
      string s)
{
   string s2 = "";
  for (int i = 0; s[i] != '\0' ; i++){
     s2 = s[i] + s2;
  }
   return s2;
}

bool capicua(
      string s)
{
   if(reversa(s)==s)
   {
      return true;
   }
   else
   {
      return false;
   }
}
int main()
{
   cout<<"Ingrese una cadena:"<<endl;
   string s;
   cin>>s;

   if (capicua(s)){
      cout<<"La cadena es capicua"<<endl;
   }
   else{
      cout<<"La cadena no es capicua"<<endl;
   }

   return 0;
}
