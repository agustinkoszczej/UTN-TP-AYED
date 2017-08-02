//============================================================================
// Name        : Ejercicio_37.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 37
//============================================================================

#include <iostream>
using namespace std;

int mcd(
      int a, int b)
{
   int auxA = a;
   bool flag = false;

   while (flag == false){
   auxA = a;
   if(a%b==0)
   {
      flag = true;
      return b;
   }
   else
   {
      a = b;
      b = auxA%b;
   }
   }
}

int main()
{
   int a, b;
   cout<<"Ingrese dos numeros: "<<endl;
   cin>>a>>b;
   cout<<"El Maximo Comun Divisor entre "<<a<<" y "<<b<<" es "<<mcd(a,b)<<endl;

   return 0;
}
