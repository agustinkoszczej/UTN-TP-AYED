//============================================================================
// Name        : Ejercicio_14.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 14
//============================================================================

#include <iostream>
using namespace std;

int productoConSumas(int x, int y)
{
   int prod;
   for(int i = 0; i<y; i++)
   {
      prod += x;
   }
   return (prod);
}

int main()
{
   cout<<"Ingrese dos numeros: "<<endl;
   int a, b;
   cin>>a>>b;

   cout << "Producto mediante sumas sucesivas: " << productoConSumas(a, b) << endl;

   return 0;
}
