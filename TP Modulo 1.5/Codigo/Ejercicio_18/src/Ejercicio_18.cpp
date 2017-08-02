//============================================================================
// Name        : Ejercicio_18.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_18
//============================================================================

#include <iostream>

using namespace std;

string replicate(
      int n, char c)
{
   string s;
   for(int i = 0; i<n; i++)
   {
      s += c;
   }
   return s;
}

string intToString(
      int n, int v)
{
   int i = 0;
   string s, aux;
   while(n>0)
   {
      aux = n%10+'0';
      s = aux+s;
      n /= 10;
   }

   s = replicate(v,'0')+s;

   return s;
}

int main()
{
   cout<<"Ingrese un numero y cantidad de ceros a agregar:"<<endl;
   int n, v;
   cin>>n>>v;

   cout<<"La cadena quedo: '"<<intToString(n,v)<<"'"<<endl;

   return 0;
}
