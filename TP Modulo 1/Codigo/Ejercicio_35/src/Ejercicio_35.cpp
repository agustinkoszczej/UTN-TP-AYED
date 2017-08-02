//============================================================================
// Name        : Ejercicio_35.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 35
//============================================================================

#include <iostream>
using namespace std;

void procesar(
      string nombre, string apellido, int edad, char sexo, char estudios, char indicador, string dom, int cantInt, char viv, int &contAnalfabetismo, int &maxInteg, string &maxDom, int &contF, int &contM, int &totEdadFam, int &cantPersonas, int &contP, int &contS, int &contT, int &contU)
{
   // Item 1
   if((estudios!='N')&&((estudios!='P')||(indicador!='I')))
   {
      cout<<"Datos Encuestado que completo los estudios Primarios: " << endl;
      cout<<""<<nombre<<", "<<apellido<<", "<<edad<<", "<<sexo<<", "<<estudios<<", "<<indicador<<endl;
   }
   // Item 2
   if((edad>10)&&(estudios=='N'))
   {
      contAnalfabetismo++;
   }
   // Item 3
   if(viv=='D')
   {
   if (cantInt > maxInteg){
      maxDom = dom;
      maxInteg = cantInt;
   }
   }
   // Item 4
   totEdadFam += edad;
   cantPersonas ++;
   // Item 5
   if ((estudios == 'P')&&(indicador == 'I')){
      contP ++;
   }
   else{
   if ((estudios == 'S')&&(indicador == 'I')){
         contS ++;
      }
   else{
      if ((estudios == 'T')&&(indicador == 'I')){
               contT ++;
            }
      else{
         if ((estudios == 'U')&&(indicador == 'I')){
                  contU ++;
               }
      }
   }
   }
   // Item 6
   if (sexo == 'F'){
      contF ++;
   }
   else
   {
      if (sexo == 'M'){
         contM ++;
      }
   }
}

int main()
{
string dom, nombre, apellido, maxDom;
char viv, sexo, estudios, indicador;
bool flag = false;
int cantInt, edad, maxInteg = 0, contAnalfabetismo = 0, totEdadFam = 0, totEdadCiu = 0, cantPersonas = 0, contP = 0, contS = 0, contT = 0, contU = 0, contM  = 0, contF = 0;

do
{
   do
   {
      cout<<"Ingrese domicilio, tipo de vivienda y cantidad de integrantes: "<<endl;
      cin>>dom>>viv>>cantInt;
      if (cantInt == 0){
         flag = true;
      }
   }while((flag == false) && ((viv!='C')&&(viv!='D'))||(cantInt<0));

   if (flag == false){
   for(int i = 0; i<cantInt; i++)
   {
      do
      {
         cout<<"Ingrese Nombre, Apellido, Edad, Sexo, Nivel de estudios alcanzados y si estan Completos o Incompletos: "<<endl;
         cin>>nombre>>apellido>>edad>>sexo>>estudios>>indicador;
      }while(((sexo!='F')&&(sexo!='M'))||((estudios!='N')&&(estudios!='P')&&(estudios!='S')&&(estudios!='T')&&(estudios!='U'))||((indicador!='I')&&(indicador!='C')));

      procesar(nombre, apellido, edad, sexo, estudios, indicador, dom, cantInt, viv, contAnalfabetismo, maxInteg, maxDom, contF, contM, totEdadFam, cantPersonas, contP, contS, contT, contU);

      if (i == (cantInt - 1)){
         cout << "Edad promedio de la familia: " << (double) totEdadFam / cantInt << endl;
         totEdadCiu += totEdadFam;
         totEdadFam = 0;
      }
   }
   }
}while(cantInt!=0);

cout << "Porcentaje de analfabetismo en la ciudad: " << (double) contAnalfabetismo*100 / cantPersonas << "%" << endl;
cout << "Domicilio con mayor cantidad de integrantes que viven en departamento: " << maxDom << endl;
cout << "Edad promedio de la ciudad: " << (double) totEdadCiu / cantPersonas << endl;
cout << "Porcentaje de sexo femenino: " << (double) contF*100 / cantPersonas << "%" << endl;
cout << "Porcentaje de sexo masculino: " << (double) contM*100 / cantPersonas << "%" << endl;



return 0;
}
