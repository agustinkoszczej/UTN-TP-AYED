//============================================================================
// Name        : Ejercicio_34.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_34
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

int calcularBilletes(
      int n)
{
   int a = n, denom = 50, cant = 0, i = 0;
   while(i<7)
   {
      cant += (a/denom);
      a = (a%denom);
      i++;
      if(i==1)
      {
         denom = 40;
      }
      if(i==2)
      {
         denom = 20;
      }
      if(i==3)
      {
         denom = 10;
      }
      if(i==4)
      {
         denom = 5;
      }
      if(i==5)
      {
         denom = 2;
      }
      if(i==6)
      {
         denom = 1;
      }
   }
   return cant;
}

int main()
{

   int n = 80;
   cout<<calcularBilletes(n);

   return 0;
}
