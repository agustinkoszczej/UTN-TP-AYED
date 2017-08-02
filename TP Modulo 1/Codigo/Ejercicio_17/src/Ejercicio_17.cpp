//============================================================================
// Name        : Ejercicio_17.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 17
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int puntajeTotal = 0, cantPP = 0, cantPE = 0, cantPG = 0;

   cout<<"Ingrese cuantos equipos juegan:"<<endl;
   int k;
   cin>>k;

   for(int i = 0; i<k; i++)
   {
      cout<<"Ingrese codigo de equipo:"<<endl;
      string codEq;
      cin >> codEq;
      for(int j = 0; j<(k-1); j++)
      {
         cout<<"Ingrese codigo de resultado:"<<endl;
         char codRe;
         cin>> codRe;

         if(codRe=='P')
         {
            cantPP++;
         }
         else
         {
            if(codRe=='E')
            {
               puntajeTotal += 1;
               cantPE++;
            }
            else
            {
               if(codRe=='G')
               {
                  puntajeTotal += 3;
                  cantPG++;
               }
            }
         }

      }
      cout << "Puntaje Total obtenido por equipo '" << codEq << "': " << puntajeTotal <<endl;
      puntajeTotal = 0;
   }

   cout << "Se perdieron " << cantPP << " partido/s, se empataron " << cantPE << " partido/s y se ganaron " << cantPG << " partido/s"<<endl;

   if (2*cantPG + cantPE != (k*(k-1))) {
      cout << "Hay inconsistencia en el lote de datos!" <<endl;
   }
   return 0;
}

