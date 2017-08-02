//============================================================================
// Name        : Ejercicio_16.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 16
//============================================================================

#include <iostream>
using namespace std;

int promedioMayores(
      int a, double prom, int &cant)
{
   prom += a;
   cant++;
   return (prom);
}

int sumaMenores(
      int a, int sum)
{
   sum += a;
   return (sum);
}

int main()
{
   int cant = 0, sum = 0;
   double prom = 0;
   for(int i = 0; i<50; i++)
   {
      cout<<"Ingrese "<<i+1<<"° numero:"<<endl;
      int a;
      cin>>a;

      if(a>100)
      {
         prom = promedioMayores(a,prom,cant);
      }
      else
      {
         if(a<(-10))
         {
            sum = sumaMenores(a,sum);
         }
      }
   }

   if(cant!=0)
   {
      cout<<"Promedio mayores que 100: "<<prom/cant<<endl;
   }
   else
   {
      cout<<"No hubo numeros mayores que 100"<<endl;
   }
   if(sum!=0)
   {
      cout<<"Suma menores que -10: "<<sum<<endl;
   }
   else
   {
      cout<<"No hubo numeros menores que -10"<<endl;
   }

   return 0;
}
