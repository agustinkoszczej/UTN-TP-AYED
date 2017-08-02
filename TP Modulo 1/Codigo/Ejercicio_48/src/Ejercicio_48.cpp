//============================================================================
// Name        : Ejercicio_48.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 48
//============================================================================

#include <iostream>
using namespace std;

bool esPrimo (int n){
   for (int i = 2; i < n; i++){
      if (n%i == 0){
         return false;
      }
   }
   return true;
}

int main()
{
   int nro;
  cout <<"Ingrese un numero: " << endl;
  cin >> nro;

  if (esPrimo(nro)){
     cout << "El numero " << nro << " es primo" << endl;
  }
  else{
     cout << "El numero " << nro << " no es primo" << endl;
  }

   return 0;
}
