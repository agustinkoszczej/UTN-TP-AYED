//============================================================================
// Name        : Ejercicio_09.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 09
//============================================================================

#include <iostream>
#include <time.h>

using namespace std;

// funcion que asigna la fecha actual en los parametros dia, mes y anio
void getDate(
      int& dia, int& mes, int& anio)
{
   // fecha actual expresada en segundos
   time_t timestamp;
   time(&timestamp);

   // separo la fecha actual (expresada en segundos) en atributos
   struct tm* fechaActual = localtime(&timestamp);
   dia = fechaActual->tm_mday;
   mes = fechaActual->tm_mon+1;
   anio = fechaActual->tm_year+1900;
}


bool bisiesto(
      int anio)
{
   if((anio%4==0)&&((anio%100!=0)||(anio%400==0)))
   {
      return true;
   }
   else
   {
      return false;
   }
}

bool fechaAnteriorOPosterior (int anio, int mes, int dia, int anioActual, int mesActual, int diaActual){

   //true == es posterior | false == es anterior

   if (anio <= anioActual){
      if (((anio == anioActual)&&(mes <= mesActual)) || (anio < anioActual)){
         if (((mes == mesActual)&&(dia < diaActual)) || (mes != mesActual)){
            return false;
         }
      }
      else
            {
               return true;
               }
   }
      else
      {
         return true;
         }

   }

int diasMes (int mes, int mesActual, int anio, bool anteriorOPosterior){
   int TotDias = 0;

   if (anteriorOPosterior == false){
   for(int j = mes; j<mesActual; j++)
        {
           if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12))
           {
              TotDias += 31;
           }
           else
           {
              if(j==2)
              {
                 if(bisiesto (anio)==true)
                 {
                    TotDias += 29;
                 }
                 else
                 {
                    TotDias += 28;
                 }
              }
           }
        }
   }
   else{
      for(int j = mes; j>mesActual; j--)
              {
                 if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12))
                 {
                    TotDias += 31;
                 }
                 else
                 {
                    if(j==2)
                    {
                       if(bisiesto (anio)==true)
                       {
                          TotDias += 29;
                       }
                       else
                       {
                          TotDias += 28;
                       }
                    }
                 }
              }
         }
   return TotDias;

}

double calcularDias(
      int d, int m, int a, int diaActual, int mesActual, int anioActual)
{

   double TotDias = 0;
   int dias = 0;

   if (fechaAnteriorOPosterior( a, m, d, anioActual, mesActual, diaActual) == false){
   for(int i = a; i<anioActual; i++)
   {
      if(bisiesto (i) == true)
      {
         TotDias += 366;
      }
      else
      {
         TotDias += 365;
      }
   }
   }
   else {
      for(int i = a; i>anioActual; i--)
         {
            if(bisiesto (i) == true)
            {
               TotDias += 366; //tiene un dia mas los bisiestos cada 4 años para recuperar las 6 horas que se pierden cada año
            }
            else
            {
               TotDias += 365;
            }
         }
         }

   if ((fechaAnteriorOPosterior( a, m, d, anioActual, mesActual, diaActual))&&(m!=mesActual)){
      if ((mesActual==1)||(mesActual==3)||(mesActual==5)||(mesActual==7)||(mesActual==8)||(mesActual==10)||(mesActual==12)){
      dias = (31 - diaActual) + d;
   }
   else{
      dias = (30 - diaActual) + d;
   }
}
   else{
      if ((fechaAnteriorOPosterior( a, m, d, anioActual, mesActual, diaActual) == false)&&(m!=mesActual)){
         if ((mesActual==1)||(mesActual==3)||(mesActual==5)||(mesActual==7)||(mesActual==8)||(mesActual==10)||(mesActual==12)){
               dias = (31 - d) + diaActual;
            }
            else{
               dias = (30 - d) + diaActual;
            }
      }
      else{
         dias = d - diaActual;
      }
   }
   if (dias < 0){
      dias *= (-1);
   }
   TotDias += diasMes (m, mesActual, a, fechaAnteriorOPosterior(a, m, d, anioActual, mesActual, diaActual)) + dias;

   return TotDias;
}

int main()
{
   double fecha1, fecha2;

   int diaActual, mesActual, anioActual;
     // obtengo la fecha actual
     getDate(diaActual,mesActual,anioActual);

   cout<<"Ingrese fecha 1 en formato dia, mes y anio:"<<endl;
   int dia1, mes1, anio1;
   cin>>dia1>>mes1>>anio1;

   cout<<"Ingrese fecha 2 en formato dia, mes y anio:"<<endl;
      int dia2, mes2, anio2;
      cin>>dia2>>mes2>>anio2;

  fecha1 = calcularDias(dia1,mes1,anio1, diaActual, mesActual, anioActual);
  fecha2 = calcularDias(dia2,mes2,anio2, diaActual, mesActual, anioActual);

  if (fecha1 > fecha2){
     cout <<"La fecha "<< dia1 << " " << mes1 << " " << anio1 << " esta mas lejos de la fecha actual que la fecha "<< dia2 << " " << mes2 << " " << anio2 <<  endl;
  }
  else{
     if (fecha1 == fecha2){
        cout <<"Las dos fechas se encuentra a la misma distancia de dias de la fecha actual" <<endl;
     }
     else{
     cout <<"La fecha "<< dia2 << " " << mes2 << " " << anio2 << " esta mas lejos de la fecha actual que la fecha "<< dia1 << " " << mes1 << " " << anio1 <<  endl;
  }
  }


  cout << "Fecha 1: "<<fecha1<< " dias de diferencia respecto a la fecha actual" << endl;
  cout << "Fecha 2: "<<fecha2<< " dias de diferencia respecto a la fecha actual" << endl;
   return 0;
}
