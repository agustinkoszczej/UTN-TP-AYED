//============================================================================
// Name        : Ejercicio_11.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 11
//============================================================================

#include <iostream>
using namespace std;
bool bisiesto(
      int anio)
{
   if((anio%4==0)&&((anio%100!=0)||(anio%400==0)))
   {
      return true;
   }
   else
   {
      return false;
   }
}

int calcularDiasDelMes (int mes, int anio){
   int TotDias;

           if((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))
           {
              TotDias = 31;
           }
           else
           {
              if(mes==2)
              {
                 if(bisiesto (anio)==true)
                 {
                    TotDias = 29;
                 }
                 else
                 {
                    TotDias = 28;
                 }
              }
              else{
                 TotDias = 30;
              }
           }

   return TotDias;
}

int main() {

   cout<<"Ingrese mes y anio:"<<endl;
   int mes, anio;
   cin>>mes>>anio;

   cout<<"El mes tiene " << calcularDiasDelMes (mes, anio) << " dias" << endl;

	return 0;
}
