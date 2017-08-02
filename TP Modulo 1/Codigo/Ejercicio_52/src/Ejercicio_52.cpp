//============================================================================
// Name        : Ejercicio_52.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 52
//============================================================================

#include <iostream>

using namespace std;

int main()
{
   int dia, mes, anio, contOctubre = 0, cont1990 = 0, cont1982 = 0, maxDia = 0, maxMes = 0, maxAnio = 0;
   char sexo;
   string maxSexo;
   bool flag = true;

   while(dia!=0)
   {
      cout<<"Ingrese Dia, Mes, Anio de nacimiento y Sexo:  "<<endl;
      cin>>dia>>mes>>anio>>sexo;
      if(dia!=0)
      {
         if(flag)
         {
            maxDia = dia;
            maxMes = mes;
            maxAnio = anio;
            if(sexo=='M')
            {
               maxSexo = "Masculino";
            }
            else
            {
               maxSexo = "Femenino";
            }
            flag = false;
         }
         if(mes==10)
         {
            contOctubre++;
         }

         if(anio<1990)
         {
            cont1990++;
         }
         else
         {
            if((anio==1990)&&(mes<=7))
            {
               if((mes==7)&&(dia<9))
               {
                  cont1990++;
               }
               else
               {
                  if(mes<7)
                  {
                     cont1990++;
                  }

               }
            }
         }

         if((sexo=='F')&&(anio==1982)&&(mes>=9)&&(mes<=12))
         {
            if(((mes==9)&&(dia>=21))||((mes==12)&&(dia<=21)))
            {
               cont1982++;
            }
            else
            {
               if((mes>9)&&(mes<12))
               {
                  cont1982++;
               }
            }
         }

         if((anio<=maxAnio)&&(flag==false))
         {
            if((anio==maxAnio)&&(mes<=maxMes))
            {
               if((mes==maxMes)&&(dia<maxDia))
               {
                  maxDia = dia;
                  maxMes = mes;
                  maxAnio = anio;
                  if(sexo=='M')
                  {
                     maxSexo = "Masculino";
                  }
                  else
                  {
                     maxSexo = "Femenino";
                  }
               }
               else
               {
                  if(mes<maxMes)
                  {
                     maxDia = dia;
                     maxMes = mes;
                     maxAnio = anio;
                     if(sexo=='M')
                     {
                        maxSexo = "Masculino";
                     }
                     else
                     {
                        maxSexo = "Femenino";
                     }

                  }
               }
            }
            else
            {
               if(anio<maxAnio)
               {
                  maxDia = dia;
                  maxMes = mes;
                  maxAnio = anio;
                  if(sexo=='M')
                  {
                     maxSexo = "Masculino";
                  }
                  else
                  {
                     maxSexo = "Femenino";
                  }
               }
            }
         }
      }
   }

   cout<<"En el mes de Octubre hubo "<<contOctubre<<" nacimientos"<<endl;
   cout<<"Hubo "<<cont1990<<" nacimientos antes del 9 de Julio de 1990"<<endl;
   cout<<"Hubo "<<cont1982<<" nacimientos de mujeres en la primavera de 1982"<<endl;
   cout<<"El Sexo de la persona mas vieja es "<<maxSexo<<endl;
   return 0;
}
