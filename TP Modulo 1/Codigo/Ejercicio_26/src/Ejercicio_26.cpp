//============================================================================
// Name        : Ejercicio_26.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 26
//============================================================================

#include <iostream>
using namespace std;

double max (double a, double b){
   if (a > b){
      return a;
   }
   else {
      return b;
   }
}

int contenedorMayor (double a, double b, double c){
      if (max(max(a,b), max(b, c)) == a){
      return 1;
   }
   else{
      if (max(max(a,b), max(b, c)) == b){
            return 2;
         }
      else{
         if (max(max(a,b), max(b, c)) == c){
               return 3;
            }
      }

   }
      return 0;
}
int main()
{
   int idCont, idPuerto, cont1 = 0, cont2 = 0, cont3 = 0;
   double peso, PesoTotal = 0, peso1 = 0, peso2 = 0, peso3 = 0;

   for (int i = 0; i < 100; i++){
   do
   {
      cout<<"Ingrese Identificacion del contenedor, Peso del contenedor y Puerto de arribo: "<<endl;
      cin>>idCont>>peso>>idPuerto;
   }while((idPuerto!=1)&&(idPuerto!=2)&&(idPuerto!=3));

   PesoTotal += peso;

   if(idPuerto==1)
   {
      cont1++;
      peso1 += peso;
   }
   else{
      if(idPuerto==2)
      {
         cont2++;
         peso2 += peso;
      }
      else{
   if(idPuerto==3)
      {
         cont3++;
         peso3 += peso;
      }
      }
   }
   }
   cout << "Peso Total que el buque debe trasladar: " << PesoTotal << " kg" <<endl;
   cout << "El contenedor de mayor peso es el " << contenedorMayor(peso1, peso2, peso3) << " con " << max((max(peso1, peso2)), max(peso2, peso3)) << " kg" << endl;
   cout << "Se trasladaran " << cont1 << " al puerto 1, " << cont2 << " al puerto 2 y " << cont3 << " al puerto 3" <<endl;
return 0;
   }
