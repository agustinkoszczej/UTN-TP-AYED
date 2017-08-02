//============================================================================
// Name        : Ejercicio_31.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_31
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

int main()
{
   cout<<"Ingrese una cadena:"<<endl;
   string s;
   cin>>s;

   cout<<"La cadena quedo: "<<reversa(s)<<endl;

   return 0;
}
