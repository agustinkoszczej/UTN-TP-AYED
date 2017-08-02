//============================================================================
// Name        : Ejercicio_40.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 40
//============================================================================

#include <iostream>
using namespace std;

void separarFecha(long fecha, int &dia, int &mes, int &anio){
   dia = fecha % 100;
   anio = fecha / 10000;
   mes = (fecha / 100) % 100;
}

int main()
{
   cout<<"Ingrese fecha en formato aaaammdd:"<<endl;
   long fecha;
   int dia, mes, anio;
   cin>>fecha;

   separarFecha(fecha, dia, mes, anio);

   cout <<"Fecha Separada: " << dia << " " << mes << " "<< anio << endl;

   return 0;
}
