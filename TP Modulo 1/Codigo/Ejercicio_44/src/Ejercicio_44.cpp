//============================================================================
// Name        : Ejercicio_44.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 44
//============================================================================

#include <iostream>
using namespace std;

float calcularPorcentajeDiferencia (long a, long b){
   return ((b-a)*100/(a+b));
}

int main()
{
   int a, b;

   cout<<"Ingrese dos numeros:  "<<endl;
   cin>>a>>b;

   cout << "" << calcularPorcentajeDiferencia(a, b) << endl;


   return 0;
}
