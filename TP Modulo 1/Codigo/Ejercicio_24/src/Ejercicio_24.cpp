//============================================================================
// Name        : Ejercicio_24.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 24
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int n, min, cant = 0, prom = 0, cantSubj = 0, max = 0, maxPosConj, maxPosSubj;

   while(n>=0)
   {
      cout<<"Ingrese un numero: "<<endl;
      cin>>n;
      if(n>0)
      {
         if((n<min)||(cant==0))
         {
            min = n;
         }
         cant++;
         prom += n;
         if(n>max)
         {
            max = n;
            maxPosSubj = cant;
            maxPosConj = cantSubj+1;
         }
      }
      else
      {
         cantSubj++;
         if ((n>=0)||(cant >= 1)){
         cout<<"El valor minimo del Subconjunto es: "<<min<<endl;
         cout<<"Promedio del Subconjunto: "<<(double)prom/cant<<endl;
         cant = 0;
         prom = 0;
         min = 0;
         }
         else{
            cantSubj--;
         }
      }
   }
   cout<<"Total de Subconjuntos procesados: "<<cantSubj<<endl;
   if (cantSubj != 0){
      cout<<"Valor Maximo del Conjunto: "<<max<<" en el Subconjunto: "<<maxPosConj<<" en la posicion: "<<maxPosSubj<<endl;
   }
   return 0;
}
