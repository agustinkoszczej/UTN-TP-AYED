//============================================================================
// Name        : Ejercicio_33.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 33
//============================================================================

#include <iostream>
using namespace std;

double fibonacci (int a){
   double f, j = 1, k = 1;
   if (( a == 1)||( a == 2)){
      return 1;
   }
   else{

   for (int i = 3; i <= a; i++){
      f = j + k;
      j = k;
      k = f;
   }
   return f;
   }
}

int main()
{
   int nro;
   do{
   cout << "Ingrese un numero: " << endl;
   cin >> nro;
   }while (nro < 1);

   for (int i = 1; i <= nro; i++){
      if (i != 1){
                   cout << ", ";
                }
                cout << "" << fibonacci(i);
   }
   return 0;
   }
