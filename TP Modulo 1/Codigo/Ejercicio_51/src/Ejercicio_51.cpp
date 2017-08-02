//============================================================================
// Name        : Ejercicio_51.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 51
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

int perimetro (int x){
   return (4*x);
}

int main()
{
   int x1, x2, y1, y2, cont = 0;

   for (int i = 0; i < 20; i++){
   cout<<"Ingrese coordenadas x1;y1:  "<<endl;
   cin>>x1>>y1;
   cout<<"Ingrese coordenadas x2;y2:  "<<endl;
   cin>>x2>>y2;

   if ((abs (x1-x2)) == (abs (y1-y2)) ){
      cout << "Perimetro del rectangulo que verifica ser cuadrado: " << perimetro ((abs(x1-x2))) << endl;
   }
   else{
      cont++;
   }
   }

   cout << "Cantidad de rectangulos que no son cuadrados: " << cont << endl;

   return 0;
}
