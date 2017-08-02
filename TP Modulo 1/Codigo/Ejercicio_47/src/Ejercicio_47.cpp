//============================================================================
// Name        : Ejercicio_47.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 47
//============================================================================

#include <iostream>
using namespace std;

void sumarHora(
      long h, long t, long &res)
{
   res = h + t;

   int hh, mm, ss;

   ss = res%100;
   hh = res/10000;
   mm = (res/100)%100;


   if (ss >= 60){
      ss -= 60;
      mm ++;
   }
   if (mm >= 60){
      mm -= 60;
      hh ++;
   }
   if (hh >= 24){
      hh -= 24;
   }

   res = hh*10000+mm*100+ss;
}

int main()
{
   long hora, t, res;

   cout<<"Ingrese un hora y un tiempo en formato hhmmss: "<<endl;
   cin>>hora>>t;

   sumarHora(hora,t,res);

   cout<<"La suma de las horas es: "<<res<<endl;

   return 0;
}
