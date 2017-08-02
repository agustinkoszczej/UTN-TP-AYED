//============================================================================
// Name        : Ejercicio_28.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 28
//============================================================================

#include <iostream>
using namespace std;

void cantVocales(
      char letra, int &contA, int &contE, int &contI, int &contO, int &contU)
{
   if((letra=='a')||(letra=='A'))
   {
      contA++;
   }
   else
   {
      if((letra=='e')||(letra=='E'))
      {
         contE++;
      }
      else
      {
         if((letra=='i')||(letra=='I'))
         {
            contI++;
         }
         else
         {
            if((letra=='o')||(letra=='O'))
            {
               contO++;
            }
            else
            {
               if((letra=='u')||(letra=='U'))
               {
                  contU++;
               }

            }
         }
      }

   }
}

int cantPalabras(
      char letra, int &cantPalabras, int &cont, int max)
{
   if((letra=='_')||(letra=='.'))
   {
      cantPalabras++;
         if (cont > max)
         {
            max = cont;
         }
      cont = 0;
   }
   else{
      cont ++;
   }
   return max;
}


int main()
{
   int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0, cantP = 0, maxPalabra = 0, cont = 0;
   char letra;
   while(letra!='.')
   {
      cout<<"Ingrese oracion (separada por '_'): "<<endl;
      cin>>letra;
      cantVocales(letra,contA,contE,contI,contO,contU);
      maxPalabra = cantPalabras(letra,cantP,cont,maxPalabra);
   }
   cout<<"La vocal 'a' salio: "<<contA<<" veces"<<endl;
   cout<<"La vocal 'e' salio: "<<contE<<" veces"<<endl;
   cout<<"La vocal 'i' salio: "<<contI<<" veces"<<endl;
   cout<<"La vocal 'o' salio: "<<contO<<" veces"<<endl;
   cout<<"La vocal 'u' salio: "<<contU<<" veces"<<endl;

   cout<<"Hay "<< cantP <<" palabras en la oracion"<<endl;

   cout<<"La palabra mas larga tiene "<<maxPalabra<<" letras"<<endl;

   return 0;
}
