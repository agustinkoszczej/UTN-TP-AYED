//============================================================================
// Name        : Ejercicio_07.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 07
//============================================================================

#include <iostream>
using namespace std;

long dmaToAaaammdd(int a, int b, int c){

    return (c*10000+b*100+a);
}
int main()
{
   cout<<"Ingrese dia, mes y anio:"<<endl;
   int d, m, a;
   cin>>d>>m>>a;

   cout << "Formato aaaammdd: " << dmaToAaaammdd(d, m, a);

   return 0;
}
