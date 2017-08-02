//============================================================================
// Name        : Ejercicio_13.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_13
//============================================================================

#include <iostream>
using namespace std;

string replicate(
      int n, char c)
{
   string s;
   for(int i = 0; i<n; i++)
   {
      s += c;
   }
   return s;
}

int main()
{
   cout<<"Ingrese un caracter y un numero:"<<endl;
   char c;
   int n;
   cin>>c>>n;
   cout<<"La cadena quedo: '"<<replicate(n,c)<<"'"<<endl;

   return 0;
}
