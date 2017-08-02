//============================================================================
// Name        : Ejercicio_06.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 06
//============================================================================

#include <iostream>
using namespace std;

int minimo(
      int x, int y)
{
   int resultado = y;

   if(x<y)
   {
      resultado = x;
   }
   return resultado;
}

int maximo(
      int x, int y)
{
   int resultado = y;

   if(x>y)
   {
      resultado = x;
   }
   return resultado;
}

int main()
{
   cout<<"Ingrese tres numeros:"<<endl;
   int a, b, c;
   cin>>a>>b>>c;

   int menor, medio, mayor;

   if((a>b)&&(a>c))
   {
      mayor = a;
      menor = minimo(b,c);
      medio = maximo(b,c);
   }
   else
   {
      if((b>a)&&(b>c))
      {
         mayor = b;
         menor = minimo(a,c);
         medio = maximo(a,c);
      }

      else
      {
         if((c>a)&&(c>b))
         {
            mayor = c;
            menor = minimo(a,b);
            medio = maximo(a,b);
         }
      }
   }

   cout << menor <<" es el menor" << endl;
   cout << medio <<" es el del medio" << endl;
   cout << mayor <<" es el mayor" << endl;

   return 0;
}
