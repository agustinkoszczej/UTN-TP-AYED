//============================================================================
// Name        : Ejercicio_15.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 15
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
      return (fact);
}

int main()
{
   cout<<"Ingrese un numero: "<<endl;
   int a;
   cin>>a;

   cout << "Factorial: " << factorial(a) << endl;;

   return 0;
}
