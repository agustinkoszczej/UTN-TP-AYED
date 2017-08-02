//============================================================================
// Name        : Ejercicio_43.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 43
//============================================================================

#include <iostream>
using namespace std;

int menor(
      int a, int b)
{
   if(a<b)
   {
      return a;
   }
   else
   {
      return b;
   }
}

int menorFactorComun(
      int a, int b)
{
   for(int i = 2; i<=menor(a,b); i++)
   {
      if((a%i==0)&&(b%i==0))
      {
         return i;
      }
   }
   return 0;
}

int main()
{
   int P, Q, aux;

   cout<<"Ingrese dos numeros:  "<<endl;
   cin>>P>>Q;

   while(menorFactorComun(P,Q)!=0)
   {
      cout<<P<<" / "<<Q<<" = ";
      aux = P;
      P /= menorFactorComun(P,Q);
      Q /= menorFactorComun(aux,Q);

   }
   cout<<P<<" / "<<Q;

   return 0;
}
