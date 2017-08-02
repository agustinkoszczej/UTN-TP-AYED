//============================================================================
// Name        : Ejercicio_41.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 41
//============================================================================

#include <iostream>
using namespace std;

bool esMultiplo(
      int a, int b)
{
   if (b%a == 0)
   {
   return true;
}
else
{
   return false;
}
}

int main()
{
int a, b;

cout<<"Ingrese dos numeros:  "<<endl;
cin>>a>>b;
if(esMultiplo(a,b))
{
   cout<<a<<" es multiplo de "<<b<<endl;
}
else
{
   cout<<a<<" no es multiplo de "<<b<<endl;
}
return 0;
}
