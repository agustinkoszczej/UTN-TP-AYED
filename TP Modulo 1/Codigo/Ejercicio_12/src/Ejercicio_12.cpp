//============================================================================
// Name        : Ejercicio_12.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 12
//============================================================================

#include <iostream>
using namespace std;

string edadSocio (int e)
{
string leyenda;
 if (e <= 12){
    leyenda = "menor";
 }
 else {
    if (e <= 18){
       leyenda = "cadete";
    }
    else{
       if (e < 26){
          leyenda = "juvenil";
       }
       else{
          leyenda = "mayor";
       }
    }
 }

   return (leyenda);
}

int main()
{
   cout<<"Ingrese edad del Socio: "<<endl;
   int edad;
   cin>>edad;
   cout << "El Socio es: " << edadSocio (edad)<<endl;

return 0;
}
