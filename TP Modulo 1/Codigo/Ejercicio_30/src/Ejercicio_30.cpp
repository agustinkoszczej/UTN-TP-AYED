//============================================================================
// Name        : Ejercicio_30.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 30
//============================================================================

#include <iostream>
using namespace std;

bool primo (int a){
   for (int i = 2; i < a; i++){
      if (a%i == 0){
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

  if (primo(nro)){
     cout << "El numero " << nro << " es primo" << endl;
  }
  else{
     cout << "El numero " << nro << " no es primo" << endl;
  }

   return 0;
}
