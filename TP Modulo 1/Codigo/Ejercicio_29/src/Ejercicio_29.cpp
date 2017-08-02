//============================================================================
// Name        : Ejercicio_29.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 29
//============================================================================

#include <iostream>
using namespace std;

string enteroToRomano(
      int a)
{

   string romano;
   //M = 1000   CM = 900   D = 500   CD = 400   C = 100   XC = 90   L = 50
   //XL = 40      X = 10      IX = 9   V = 5   IV = 4   I = 1
   int contM = 0, contCM = 0, contD = 0, contCD = 0, contC = 0, contXC = 0, contL = 0, contXL = 0, contX = 0, contIX = 0, contV = 0, contIV = 0,
         contI = 0;

   while(a>0)
   {
      if((a>=1000)&&(contM<=3))
      {
         a -= 1000;
         romano += "M";
         contM++;
      }
      else
      {
         if((a>=900)&&(contCM<=3))
         {
            a -= 900;
            romano += "CM";
            contCM++;
         }
         else
         {
            if((a>=500)&&(contD<=3))
            {
               a -= 500;
               romano += "D";
               contD++;
            }
            else
            {
               if((a>=400)&&(contCD<=3))
               {
                  a -= 400;
                  romano += "CD";
                  contCD++;
               }
               else
               {
                  if((a>=100)&&(contC<=3))
                  {
                     a -= 100;
                     romano += "C";
                     contC++;
                  }
                  else
                  {
                     if((a>=90)&&(contXC<=3))
                     {
                        a -= 90;
                        romano += "XC";
                        contXC++;
                     }
                     else
                     {
                        if((a>=50)&&(contL<=3))
                        {
                           a -= 50;
                           romano += "L";
                           contL++;
                        }
                        else
                        {
                           if((a>=40)&&(contXL<=3))
                           {
                              a -= 40;
                              romano += "XL";
                              contXL++;
                           }
                           else
                           {
                              if((a>=10)&&(contX<=3))
                              {
                                 a -= 10;
                                 romano += "X";
                                 contX++;
                              }
                              else
                              {
                                 if((a>=9)&&(contIX<=3))
                                 {
                                    a -= 9;
                                    romano += "IX";
                                    contIX++;
                                 }
                                 else
                                 {
                                    if((a>=5)&&(contV<=3))
                                    {
                                       a -= 5;
                                       romano += "V";
                                       contV++;
                                    }
                                    else
                                    {
                                       if((a>=4)&&(contIV<=3))
                                       {
                                          a -= 4;
                                          romano += "IV";
                                          contIV++;
                                       }
                                       if((a>=1)&&(contI<=3))
                                       {
                                          a -= 1;
                                          romano += "I";
                                          contI++;
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }

   return romano;
}

int main()
{
   int a;
   do
   {
      cout<<"Ingrese un numero: "<<endl;
      cin>>a;
   }while((a<1)||(a>3999));

   cout<<"El numero "<<a<<" en romano es: "<<enteroToRomano(a)<<endl;
   return 0;
}
