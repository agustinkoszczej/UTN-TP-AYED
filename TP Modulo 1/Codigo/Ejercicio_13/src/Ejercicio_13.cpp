//============================================================================
// Name        : Ejercicio_13.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 13
//============================================================================

#include <iostream>
using namespace std;

void nNaturales(int n)
{
   for(int i = 0; i<n; i++)
   {
      cout<<""<< i;
      if ( i != n - 1){
         cout << ", ";
      }
   }
}

int main()
{
   cout<<"Ingrese un numero: "<<endl;
   int n;
   cin>>n;

   nNaturales(n);

   return 0;
}
