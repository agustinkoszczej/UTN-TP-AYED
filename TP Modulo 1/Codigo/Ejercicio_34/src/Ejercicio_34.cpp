//============================================================================
// Name        : Ejercicio_34cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 34
//============================================================================

#include <iostream>
using namespace std;

void calculos(
      int a, int &cont0, int &contP, double &promP, int &sumaN)
{
   if(a==0)
   {
      cont0++;
   }
   else
   {
      if(a>0)
      {
         promP += a;
         contP++;
      }
      else
      {
         sumaN += a;
      }
   }
}

void limpiarVariables(
      int &cont0, int &contP, int &sumaN, double &promP)
{
   cont0 = 0, contP = 0, sumaN = 0, promP = 0;
}

int main()
{
   int nro, cont0 = 0, contP = 0, sumaN = 0;
   double promP = 0;

   //Ejercicio 34 Parte A:
   cout<<"> Item A: "<<endl;
   for(int i = 0; i<167; i++)
   {
      cout<<"Ingrese un numero: "<<endl;
      cin>>nro;
      calculos(nro,cont0,contP,promP,sumaN);
   }

   cout<<"Hubo "<<cont0<<" ceros"<<endl;
   cout<<"El promedio de los positivos es de "<<promP/contP<<endl;
   cout<<"Sumatoria de los negativos es de "<<sumaN<<endl;

   limpiarVariables(cont0,contP,sumaN,promP);

   //----------------------------------------------------------------//
   //Ejercicio 34 Parte B:
   cout<<""<<endl;
   cout<<"> Item B: "<<endl;
   int n;
   cout<<"Ingrese cantidad de valores numeros: "<<endl;
   cin>>n;
   for(int i = 0; i<n; i++)
   {
      cout<<"Ingrese un numero: "<<endl;
      cin>>nro;
      calculos(nro,cont0,contP,promP,sumaN);
   }

   cout<<"Hubo "<<cont0<<" ceros"<<endl;
   cout<<"El promedio de los positivos es de "<<promP/contP<<endl;
   cout<<"Sumatoria de los negativos es de "<<sumaN<<endl;

   limpiarVariables(cont0,contP,sumaN,promP);

//----------------------------------------------------------------//
//Ejercicio 34 Parte C:
   cout<<""<<endl;
   cout<<"> Item C: "<<endl;
   int anterior;
   bool flag = false;
   while(flag==false)
   {
      cout<<"Ingrese un numero: "<<endl;
      cin>>nro;

      if(anterior==nro)
      {
         flag = true;
      }
      else
      {
         calculos(nro,cont0,contP,promP,sumaN);
         anterior = nro;
      }

   }

   cout<<"Hubo "<<cont0<<" ceros"<<endl;
   cout<<"El promedio de los positivos es de "<<promP/contP<<endl;
   cout<<"Sumatoria de los negativos es de "<<sumaN<<endl;

   limpiarVariables(cont0,contP,sumaN,promP);

//----------------------------------------------------------------//
//Ejercicio 34 Parte D:
   cout<<""<<endl;
   cout<<"> Item D: "<<endl;
   cout<<"Ingrese cantidad de valores numeros: "<<endl;
   cin>>n;
   for(int i = 0; i<n; i++)
   {
      cout<<"Ingrese un numero: "<<endl;
      cin>>nro;
      calculos(nro,cont0,contP,promP,sumaN);
      if(cont0==4)
      {
         i = n;
      }

   }

   cout<<"Hubo "<<cont0<<" ceros"<<endl;
   cout<<"El promedio de los positivos es de "<<promP/contP<<endl;
   cout<<"Sumatoria de los negativos es de "<<sumaN<<endl;

   limpiarVariables(cont0,contP,sumaN,promP);

//----------------------------------------------------------------//
//Ejercicio 34 Parte E:
   cout<<""<<endl;
   cout<<"> Item E: "<<endl;
   cout<<"Ingrese cantidad de valores numeros: "<<endl;
   cin>>n;
   for(int i = 0; i<n; i++)
   {
      cout<<"Ingrese un numero: "<<endl;
      cin>>nro;
      calculos(nro,cont0,contP,promP,sumaN);
      if(promP/contP>6)
      {
         i = n;
      }

   }

   cout<<"Hubo "<<cont0<<" ceros"<<endl;
   cout<<"El promedio de los positivos es de "<<promP/contP<<endl;
   cout<<"Sumatoria de los negativos es de "<<sumaN<<endl;

   limpiarVariables(cont0,contP,sumaN,promP);

   return 0;
}
