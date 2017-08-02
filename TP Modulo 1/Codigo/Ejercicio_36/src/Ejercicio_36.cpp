//============================================================================
// Name        : Ejercicio_36.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 36
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int m, nroV, cantAsientos, nroP, contAsientos = 0, maxNroVuelo, vuelosCompl = 0;
   double importe, totVuelo = 0, totMes = 0, maxVuelo;
   string destino;
   bool lleno = false;

   cout<<"Ingrese cantidad de vuelos: "<<endl;
   cin>>m;

   for(int i = 0; i<m; i++)
   {
      cout<<"Ingrese numero de vuelo, destino y cantidad de asientos: "<<endl;
      cin>>nroV>>destino>>cantAsientos;
      cout<<"Nro de Vuelo: "<<nroV<<", Destino: "<<destino<<endl;

      for(int j = 0; j<cantAsientos; j++)
      {
         cout<<"Ingrese numero de pasaporte y el importe: "<<endl;
         cin>>nroP>>importe;

         if(nroP!=0)
         {
            cout<<"Nro de Pasaporte: | "<<nroP<<" | Importe en U$S: | $"<<importe<<" | "<<endl;
            totVuelo += importe;
            contAsientos++;

         }
         if((nroP==0)||(j==cantAsientos-1))
         {
            if((j==cantAsientos-1)&&(nroP != 0))
            {
               if(lleno)
               {
                  vuelosCompl++;
               }
               else
               {
                  vuelosCompl = 1;
               }
               lleno = true;
            }
            else
            {
               lleno = false;
            }
            j = cantAsientos;
            cout << "" << endl;
            cout<<"Total recaudado del vuelo: $"<<totVuelo<<endl;
            cout<<"% de Asientos Libres del vuelo: "<<(double)(cantAsientos - contAsientos) *100/cantAsientos<<endl;
            cout<<"% de Asientos Ocupados del vuelo: "<<(double)contAsientos*100/cantAsientos<<endl;
            cout << "" << endl;
            totMes += totVuelo;
            if((totVuelo>maxVuelo)||(i==0))
            {
               maxVuelo = totVuelo;
               maxNroVuelo = nroV;
            }
            totVuelo = 0;
            contAsientos = 0;

         }
      }
   }
   cout<<"Total recaudado en el mes: $"<<totMes<<endl;
   cout<<"Cantidad de veces seguidas que se dieron vuelos completos: "<<vuelosCompl<<endl;
   cout<<"El numero de vuelo que mas recaudo: "<<maxNroVuelo<<endl;

   return 0;
}
