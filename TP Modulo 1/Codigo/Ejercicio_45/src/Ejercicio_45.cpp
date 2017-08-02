//============================================================================
// Name        : Ejercicio_45.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 45
//============================================================================

#include <iostream>
using namespace std;

double pow (unsigned int x, unsigned int y){
   double potencia = 1;
   for (int i = 0; i < y; i ++){
      potencia *= x;
   }
   return potencia;
}

int main()
{
   int a, b;

   cout<<"Ingrese dos numeros:  "<<endl;
   cin>>a>>b;

   cout << "" << pow(a, b) << endl;


   return 0;
}
