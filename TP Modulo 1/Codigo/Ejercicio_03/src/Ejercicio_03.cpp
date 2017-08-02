//============================================================================
// Name        : Ejercicio_03.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 03
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   cout<<"Ingrese un numero:"<<endl;
   int a;
   cin>>a;

   double resultado = (double) a / 5;

   //Cociente de 5
   cout << a << " / 5 (cociente) = " << resultado << endl;

   //Resto de 5
   resultado =  a % 5;
   cout << a << " / 5 (resto) = " << resultado << endl;

   //Cociente de 5 y luego 7
   resultado = (double) a /5 /7;
   cout << "(" << a << " / 5) / 7 (cociente) = " << resultado << endl;

   return 0;
}
