//============================================================================
// Name        : Ejercicio_19.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 19
//============================================================================

#include <iostream>
using namespace std;

void mostrarMultiplos (int nro){
   int i = 0, j = 1;
   while (i < nro){
      if ((j % 3 == 0) && (j % 5 != 0)){
         cout<<""<< j;
         i ++;
              if (i < nro){
                 cout << ", ";
              }
      }
      j++;
   }
}

int main()
{

   cout<<"Ingrese un numero: "<<endl;
   int m;
   cin>>m;

   mostrarMultiplos (m);

   return 0;
}
