//============================================================================
// Name        : Ejercicio_27.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 27
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int tInfr, cant = 0;
   string motivo, motivoMin;
   double valor, valorTotalL = 0, ValorTotalM = 0, valorTotalG = 0, min;
   char gravedad;
   bool flag = true;

   while(tInfr!=0)
   {
      do
      {
         cout<<"Ingrese Tipo de infraccion, Motivo de la infraccion, Valor de la multa y Gravedad de la infraccion: "<<endl;
         cin>>tInfr>>motivo>>valor>>gravedad;
      }while((tInfr!=0)&&(tInfr!=1)&&(tInfr!=2)&&(tInfr!=3)&&(tInfr!=4));
      if(tInfr != 0)
      {

         if(gravedad=='L')
         {
            valorTotalL += valor;
         }
         else
         {
            if(gravedad=='M')
            {
               ValorTotalM += valor;
            }
            else
            {
               if(gravedad=='G')
               {
                  valorTotalG += valor;
               }
            }
         }

         if(flag)
         {
            min = valor;
            motivoMin = motivo;
            flag = false;
         }
         if(valor<min)
         {
            min = valor;
            motivoMin = motivo;
         }

         if(((tInfr==3)||(tInfr==4))&&(gravedad=='G'))
         {
            cant++;
         }
      }
   }

   cout<<"El valor total de las multas a pagar con Gravedad 'L' es de $"<< valorTotalL<<endl;
   cout<<"El valor total de las multas a pagar con Gravedad 'M' es de $"<< ValorTotalM<<endl;
   cout<<"El valor total de las multas a pagar con Gravedad 'G' es de $"<< valorTotalG<<endl;

   if(cant>3)
   {
      cout<<"Clausurar Fabrica"<<endl;
   }
   cout<<"El motivo correspondiente a la infraccion de menor valor es: "<<motivoMin<<endl;
   return 0;
}
