//============================================================================
// Name        : Ejercicio_20.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 20
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int mayor;
   for (int i = 0; i < 10; i++){
   cout<<"Ingrese " << i+1 << "º numero: "<<endl;
   int n;
   cin>>n;
   if ( i == 0){
      mayor = n;
   }

   if (n > mayor) {
      mayor = n;
   }
   }

   cout << "El mayor numero de los ingresados es " << mayor <<endl;

   return 0;
}
