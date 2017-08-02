//============================================================================
// Name        : Ejercicio_10.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 10
//============================================================================

#include <iostream>
using namespace std;

bool equilatero(double a, double b, double c)
{
   if((a==b)&&(b==c))
   {
      return true;
   }
   else
   {
      return false;
   }
}

bool isosceles(double a, double b, double c)
{
   if((a==b)||(a==c)||(b==c))
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
   cout<<"Ingrese lado 1, 2 y 3: "<<endl;
   double a, b, c;
   cin>>a>>b>>c;
   if(equilatero(a,b,c))
   {
      cout<<"Es equilatero "<<endl;
   }
   else
   {
   if (isosceles(a, b, c))
   {
      cout<<"Es isosceles "<<endl;
   }
   else
   {
      cout<<"Es escaleno"<<endl;
   }
}
return 0;
}
