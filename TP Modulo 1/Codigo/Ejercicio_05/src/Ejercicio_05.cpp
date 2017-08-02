//============================================================================
// Name        : Ejercicio_05.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 05
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   cout<<"Ingrese dos numeros:"<<endl;
   int a, b;
   cin>>a>>b;

   if(a>b)
   {
      cout<<a<<" es mayor a "<<b<<endl;
   }
   else
      if(a==b)
      {
         cout<<a<<" es igual a "<<b<<endl;
      }
      else
      {
         cout<<b<<" es mayor a "<<a<<endl;
      }

   return 0;
}
