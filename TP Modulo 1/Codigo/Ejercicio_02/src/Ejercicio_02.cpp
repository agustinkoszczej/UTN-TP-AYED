//============================================================================
// Name        : Ejercicio_02.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 02
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   cout<<"Ingrese dos numeros:"<<endl;
   int a, b;
   cin>>a>>b;

   if(b==0)
   {
      cout<<"No se puede dividir por cero"<<endl;
   }
   else {
      double resultado = (double) a/b;
      cout << a << " / " << b << " = " << resultado << endl;
   }

   return 0;
}
