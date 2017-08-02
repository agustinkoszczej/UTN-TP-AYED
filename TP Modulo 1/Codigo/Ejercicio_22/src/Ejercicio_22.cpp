//============================================================================
// Name        : Ejercicio_22.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 22
//============================================================================

#include <iostream>
using namespace std;

long ddmmaaaaToAaaammdd(long f){
   int d = f / 1000000;
   int a = f % 10000;
   int m = (f / 10000) % 100;
   long fecha = a*10000+m*100+d;
   return fecha;
}


int main()
{
   int band = 0;
   long fecha, mayor, menor;
   string nombre, nomMenor, nomMayor;

   while (nombre != "fin"){
   cout<<"Ingrese nombre y fecha de nacimiento con formato ddmmaaaa: "<<endl;
   cin>>nombre>>fecha;

   if (nombre != "fin"){
   if ( band == 0){
      menor = ddmmaaaaToAaaammdd(fecha);
      nomMenor = nombre;
      mayor = ddmmaaaaToAaaammdd(fecha);
      nomMayor = nombre;
      band = 1;
   }
   if (ddmmaaaaToAaaammdd(fecha)< mayor){
      mayor = ddmmaaaaToAaaammdd(fecha);
      nomMayor = nombre;
   }
   if (ddmmaaaaToAaaammdd(fecha) > menor){
      menor = ddmmaaaaToAaaammdd(fecha);
      nomMenor = nombre;
   }
   }
   }
   cout << nomMenor << " es el mas joven y " << nomMayor << " es el de mayor edad" <<endl;
   return 0;
}
