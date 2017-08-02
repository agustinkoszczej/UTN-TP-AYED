//============================================================================
// Name        : Ejercicio_49.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 49
//============================================================================

#include <iostream>
using namespace std;

int calcularBilletes(
      int &monto, int denom)
{

   int cant = monto/denom;
   monto = monto%denom;
   return cant;
}

int main()
{
   int dinero;
   cout<<"Ingrese un numero: "<<endl;
   cin>>dinero;

   cout<<"Cantidad de billetes de 100: "<<calcularBilletes(dinero,100)<<endl;
   cout<<"Cantidad de billetes de $50: "<<calcularBilletes(dinero,50)<<endl;
   cout<<"Cantidad de billetes de $20: "<<calcularBilletes(dinero,20)<<endl;
   cout<<"Cantidad de billetes de $10: "<<calcularBilletes(dinero,10)<<endl;
   cout<<"Cantidad de billetes de $5: "<<calcularBilletes(dinero,5)<<endl;
   cout<<"Cantidad de billetes de $2: "<<calcularBilletes(dinero,2)<<endl;
   cout<<"Cantidad de billetes de $1: "<<calcularBilletes(dinero,1)<<endl;

   return 0;
}
