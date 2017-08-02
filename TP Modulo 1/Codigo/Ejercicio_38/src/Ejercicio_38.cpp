//============================================================================
// Name        : Ejercicio_38.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 38
//============================================================================

#include <iostream>
using namespace std;


/*
  1. El comportamiento de la funcion factorial cuando recibe valores pequenios
     como parametro es preciso el resultado.

  2. El comportamiento de la funcion factorial cuando recibe valores grandes
     como parametro es impreciso el resultado.

  3. La  causa del problema es que los tipos de datos 'int' no pueden almacenar
     valores tan grandes y lo solucionaria cambiando el tipo de dato de la funcion
     factorial a 'double' o 'long' si no se desea tanta precision.
*/

double factorial(int f)
{
   double fact = 1;
   for(int i = 0; i< (f-1); i++)
   {
      fact = fact * (f - i);
   }
   return (fact);
}

int main()
{
   cout<<"Ingrese un numero: "<<endl;
   int a;
   cin>>a;

   cout << "Factorial: " << factorial(a) << endl;

   return 0;
}
