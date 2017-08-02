//============================================================================
// Name        : Ejercicio_49.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 49
//============================================================================

#include <iostream>
using namespace std;

void cantBilletes(
      int n, int &cant1, int &cant2, int &cant5, int &cant10, int &cant20, int &cant50, int &cant100)
{
   while(n>0)
   {
      if (n >= 100){
         cant100++;
         n -= 100;
      }
      else{
         if (n >= 50){
                  cant50++;
                  n -= 50;
               }
         else{
                  if (n >= 20){
                           cant20++;
                           n -= 20;
                        }
                  else{
                           if (n >= 10){
                                    cant10++;
                                    n -= 10;
                                 }
                           else{
                                    if (n >= 5){
                                             cant5++;
                                             n -= 5;
                                          }
                                    else{
                                             if (n >= 2){
                                                      cant2++;
                                                      n -= 2;
                                                   }
                                             else{
                                                      if (n >= 1){
                                                               cant1++;
                                                               n -= 1;
                                                            }
                                                   }
                                          }
                                 }
                        }
               }
      }
   }
}

int main()
{
   int dinero, cant1 = 0, cant2 = 0, cant5 = 0, cant10 = 0, cant20 = 0, cant50 = 0, cant100 = 0;
   cout<<"Ingrese un numero: "<<endl;
   cin>>dinero;

   cantBilletes(dinero, cant1, cant2, cant5, cant10, cant20, cant50, cant100);

   if (cant1 != 0){
      cout << "Cantidad de billetes de $1: " << cant1 << endl;
   }
   if (cant2 != 0){
      cout << "Cantidad de billetes de $2: " << cant2 << endl;
   }
   if (cant5 != 0){
      cout << "Cantidad de billetes de $5: " << cant5 << endl;
   }
   if (cant10 != 0){
      cout << "Cantidad de billetes de $10: " << cant10 << endl;
   }
   if (cant20 != 0){
      cout << "Cantidad de billetes de $20: " << cant20 << endl;
   }
   if (cant50 != 0){
      cout << "Cantidad de billetes de $50: " << cant50 << endl;
   }
   if (cant100 != 0){
      cout << "Cantidad de billetes de $100: " << cant100 << endl;
   }

   return 0;
}
