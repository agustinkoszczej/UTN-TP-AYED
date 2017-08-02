//============================================================================
// Name        : Ejercicio_31.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 31
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
   int nro, cont = 0;
  cout <<"Ingrese un numero: " << endl;
  cin >> nro;

  for (int i = 2; cont < nro; i++){
       if (primo(i)){
          if (i != 2){
             cout << ", ";
          }
          cout << "" << i;
          cont++;
       }

  }

   return 0;
}
