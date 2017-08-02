//============================================================================
// Name        : Ejercicio_14.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_14
//============================================================================

#include <iostream>
using namespace std;

string spaces(
      int n)
{
   string s;
   for(int i = 0; i<n; i++)
   {
      s += ' ';
   }
   return s;
}

int main()
{
   cout<<"Ingrese un numero:"<<endl;
   int n;
   cin>>n;
   cout<<"La cadena quedo: '"<<spaces(n)<<"'"<<endl;

   return 0;
}
