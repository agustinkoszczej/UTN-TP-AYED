//============================================================================
// Name        : Ejercicio_39.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 39
//============================================================================

#include <iostream>
using namespace std;

long unificarFecha(int dia, int mes, int anio){

    return (anio*10000+mes*100+dia);
}
int main()
{
   cout<<"Ingrese dia, mes y anio:"<<endl;
   int d, m, a;
   cin>>d>>m>>a;

   cout << "Fecha Unificada: " << unificarFecha(d, m, a);

   return 0;
}
