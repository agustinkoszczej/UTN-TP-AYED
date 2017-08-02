//============================================================================
// Name        : Ejercicio_21.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 21
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int mayor, menor, posMen, posMay;

   cout<<"Ingrese cantidad de numeros a ingresar: "<<endl;
   int n;
   cin>>n;

   for (int i = 0; i < n; i++){
   cout<<"Ingrese " << i+1 << "º numero: "<<endl;
   int a;
   cin>>a;

   if ((a > 0)&&(a < 100)){
   if ( i == 0){
      mayor = a;
      menor = a;
      posMay = i+1;
      posMen = i +1;
   }

   if (a > mayor) {
      mayor = a;
      posMay = i+1;
   }
   if (a < menor) {
         menor = a;
         posMen = i+1;
      }
   }
   else{
      i--;
   }
   }

   cout << "El menor numero de los ingresados es " << menor << " en la posicion " << posMen <<endl;
   cout << "El mayor numero de los ingresados es " << mayor << " en la posicion " << posMay  <<endl;
   return 0;
}
