//============================================================================
// Name        : Ejercicio_23.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 23
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int n, mayor = 0, menor = 0, cant = 0, minRango = 27, band1 = 0, band2 = 0;
   double prom = 0;

   while(n!=0)
   {
      cout<<"Ingrese un numero: "<<endl;
      cin>>n;
      if(n!=0)
      {
         cant++;
         prom += n;
         if(band1==0)
         {
            if (n > 0){
               menor = n;
               band1 = 1;
            }
         }
         if (band2 == 0){
            if (n < 0){
               mayor = n;
               band2 = 1;
            }

         }
         if ((n >= (-17)) && (n <= 26)){
            if (n < minRango){
               minRango = n;
            }
         }
      if ((n < 0) && (n > mayor))
            {
               mayor = n;
            }
            else
            {
            if ((n > 0) && (n < menor))
                  {
                     menor = n;
                  }
               }
            }
         }
   if (mayor != 0){
      cout << "Valor maximo negativo: " << mayor <<endl;
   }
   if (menor != 0){
      cout << "Valor minimo positivo: " << menor <<endl;
   }
   if (minRango != 27){
      cout << "Valor minimo del rango -17 y 26: " << minRango <<endl;
   }
   if (cant != 0){
      cout << "Promedio de todos los valores ingresados: " <<  prom / cant <<endl;
   }
         return 0;
      }
