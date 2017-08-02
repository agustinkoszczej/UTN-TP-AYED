//============================================================================
// Name        : Ejercicio_08.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 08
//============================================================================

#include <iostream>
using namespace std;

void aaaammddToDma(int &d, int &m, int &a, long f){
   d = f % 100;
   a = f / 10000;
   m = (f / 100) % 100;
}

int main()
{
   cout<<"Ingrese fecha en formato aaaammdd:"<<endl;
   long fecha;
   int dia, mes, anio;
   cin>>fecha;

   aaaammddToDma (dia, mes, anio, fecha);

   cout <<"Formato dma: " << dia << " " << mes << " "<< anio << endl;

   return 0;
}
