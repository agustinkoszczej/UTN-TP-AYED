//============================================================================
// Name        : Ejercicio_25.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 25
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int m, n, cont0 = 0, anterior, contN = 0, contRep = 0, contAlt = 0, contNegado = 0, maxN = 0, maxNum = 0, maxRep = 0, maxAlt = 0, maxNegado = 0;
   char c, anteriorC;

   cout<<"Ingrese un numero:  "<<endl;
   cin>>m;

   for(int i = 0; i<m; i++)
   {
      cout<<"Ingrese color y numero: "<<endl;
      cin>>c>>n;

      if(n==0)
      {
         cont0++;
         if(i!=0)
         {
            cout<<"El numero anterior fue el "<<anterior<<endl;
         }
      }
      if((n==anterior)&&(i!=0))
      {
         contRep++;
      }
      if((n!=anterior)||(i==(m-1)))
      {
         if(contRep>maxRep)
         {
            maxRep = contRep;
            maxNum = anterior;
         }
         if(i==(m-1))
         {
            maxRep++;
         }
         if(maxRep!=0)
         {
            contRep = 1;
         }
      }
      if((n<12)||(n>23))
      {
         contNegado++;
      }
      if(((n>=12)&&(n<=23))||(i==(m-1)))
      {
         if(contNegado>maxNegado)
         {
            maxNegado = contNegado;
         }
         if(maxNegado!=0)
         {
            contNegado = 1;
         }
      }
      if(((anteriorC!=c)&&(i!=0))||(i == (m-1)))
      {
         contAlt++;
      }
      if(((anteriorC==c)&&(i!=0))||(i==(m-1)))
      {
         if(c=='N')
         {
            if(contN==0)
                 {
                    contN = 1;
                 }
            else{
               contN++;
            }
         }

         if(contN>maxN)
         {
            maxN = contN;
         }

         if(contAlt>maxAlt)
         {
            maxAlt = contAlt;
         }
         if(maxAlt!=0)
         {
            contAlt = 1;
         }
      }
      anteriorC = c;
      anterior = n;

   }
   cout<<"El 0 salio "<<cont0<<" veces"<<endl;
   cout<<"El color negro llego a repetirse "<<maxN<<" veces seguidas"<<endl;
   cout<<"El "<<maxNum<<" se repitio la mayor cantidad de veces con "<<maxRep<<" veces"<<endl;
   cout<<"La mayor cantidad de veces que salieron alternados los colores fue de "<<maxAlt<<" veces"<<endl;
   cout<<"El mayor numero de veces seguidas que se nego la segunda docena fue de "<<maxNegado<<" veces"<<endl;
   return 0;
}
