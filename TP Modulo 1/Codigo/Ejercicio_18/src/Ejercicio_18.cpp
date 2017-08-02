//============================================================================
// Name        : Ejercicio_18.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 18
//============================================================================

#include <iostream>
using namespace std;

void saldosEmpleados(
      int a, int &emp1, int &emp2, int &emp3, int &emp4)
{
   if(a<2000)
   {
      emp1++;
   }
   else
   {
      if(a<3000)
      {
         emp2++;
      }
      else
      {
         if(a<5000)
         {
            emp3++;
         }
         else
         {
            emp4++;
         }
      }
   }
}

int main()
{
   int emp1 = 0, emp2 = 0, emp3 = 0, emp4 = 0;
   double a;
   while(a!=0)
   {
      cout<<"Ingrese sueldo del empleado:"<<endl;
      cin>>a;
      if (a != 0){
         saldosEmpleados(a,emp1,emp2,emp3,emp4);
      }
   }
   cout << emp1 << " empleados ganan menos de $2000" << endl;
   cout << emp2 << " empleados ganan $2000 o mas pero menos de $3000" << endl;
   cout << emp3 << " empleados ganan $3000 o mas pero menos de $5000" << endl;
   cout << emp4 << " empleados ganan $5000 o mas" << endl;


   return 0;
}
