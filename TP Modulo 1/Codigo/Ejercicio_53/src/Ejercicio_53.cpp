//============================================================================
// Name        : Ejercicio_53.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 53
//============================================================================

#include <iostream>

using namespace std;

void calcularMontoyMinsExcedidos(
      double costo, double cargo, long minutosLibres, long minutosUsados, long &minutosExcedidos, double &total)
{

   if(minutosUsados>minutosLibres)
   {
      minutosExcedidos = minutosUsados-minutosLibres;
      costo += cargo*minutosExcedidos;
      costo += 21*costo/100;
   }
   total = costo;
}

long toMin(
      long t)
{
   return (t/100*60+t%100);
}

int main()
{
   long nroCel, tiempo, minsExcedidos = 0;
   int minsLibres;
   string nombre, direcc;
   double monto, total = 0;
   char abono;
   bool flag = true;

   for(int i = 0; i<3; i++)
   {
      cout<<"Ingrese Nro de Celular, Nombre del abonado, Direccion del abonado, Tiempo utilizado en formato hhmm y Tipo de Abono:  "<<endl;
      cin>>nroCel>>nombre>>direcc>>tiempo>>abono;
      if(flag)
      {
         flag = false;
         cout<<"Turno: Mañana"<<endl;
         cout << "[ Nombre Abonado ] | [ Direccion ] | [ Minutos Libres ] | [ Minutos Excedidos ] | [ Monto Total a Abonar ]" << endl;
      }
if (nroCel != 0){
      if(abono=='A')
      {
         minsLibres = 300;
         calcularMontoyMinsExcedidos(70,0.09,minsLibres,toMin(tiempo),minsExcedidos, total);
      }
      else
      {
         if(abono=='B')
         {
            minsLibres = 200;
            calcularMontoyMinsExcedidos(55,0.15,minsLibres,toMin(tiempo),minsExcedidos, total);
         }
         else
         {
            if(abono=='C')
            {
               minsLibres = 100;
               calcularMontoyMinsExcedidos(40,0.21,minsLibres,toMin(tiempo),minsExcedidos, total);
            }
            else
            {
               if(abono=='D')
               {
                  minsLibres = 60;
                  calcularMontoyMinsExcedidos(28,0.29,minsLibres,toMin(tiempo),minsExcedidos, total);
               }
               else
               {
                  if(abono=='E')
                  {
                     minsLibres = 40;
                     calcularMontoyMinsExcedidos(19,0.37,minsLibres,toMin(tiempo),minsExcedidos, total);
                  }
               }
            }
         }
      }
   }
      if(nroCel!=0)
      {
         i--;
      }

      else
      {
         if(i==0)
         {
            cout<<"Turno: Tarde"<<endl;
            cout << "[ Nombre Abonado ] | [ Direccion ] | [ Minutos Libres ] | [ Minutos Excedidos ] | [ Monto Total a Abonar ]" << endl;
         }
         else
         {
            if(i==1)
            {
               cout<<"Turno: Noche"<<endl;
               cout << "[ Nombre Abonado ] | [ Direccion ] | [ Minutos Libres ] | [ Minutos Excedidos ] | [ Monto Total a Abonar ]" << endl;
            }
         }
      }
      if (nroCel != 0){
         cout<<"[ "<<nombre<<" ] | [ "<<direcc<<" ] | [ "<<minsLibres<<" ] | [ "<<minsExcedidos<<" ] | [ $"<<total<<" ]"<<endl;
      }

   }

cout << "Fin";
   return 0;
}
