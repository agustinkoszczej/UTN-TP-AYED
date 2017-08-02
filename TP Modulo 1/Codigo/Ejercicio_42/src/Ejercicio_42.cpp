//============================================================================
// Name        : Ejercicio_42.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 42
//============================================================================

#include <iostream>
using namespace std;

double factorial(int f)
{
   double fact = 1;
   for(int i = 0; i< (f-1); i++)
   {
      fact = fact * (f - i);
   }
   return fact;
}

bool esMultiplo(
      int a, int b)
{
   if(b%a==0)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
   int a, m, cont357 = 0, cont35 = 0;

   cout<<"Ingrese cantidad de numeros a ingresar: " << endl;
   cin>>m;
   for(int i = 0; i<m; i++)
   {
      cout<<"Ingrese un numero:  "<<endl;
      cin>>a;
      if((esMultiplo(3,a))&&(esMultiplo(5,a))&&(esMultiplo(7,a)))
      {
         cont357++;
      }
      else
      {
         if((esMultiplo(3,a))&&(esMultiplo(5,a)))
         {
            cont35++;
         }
      }
      cout<<"Factorial: "<<factorial(a)<<endl;

   }
   cout<<"Hay "<<cont357<<" multiplos de 3, 5 y 7"<<endl;
   cout<<"Hay "<<cont35<<" multiplos de 3 y 5"<<endl;

   return 0;
}
