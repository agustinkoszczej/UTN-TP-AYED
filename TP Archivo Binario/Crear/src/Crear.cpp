//============================================================================
// Name        : Crear.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : TP Archivo Binario - Crear
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

using namespace std;

template<typename T> void write(
      FILE* f, T v)
{
   fwrite(&v,sizeof(T),1,f);
   return;
}

template<typename T, typename K> int find(
      T arr[], int len, K v, int criterio(
            T, K))
{
   int i = 0;
   while(i<len&&criterio(arr[i],v)!=0)
   {
      i++;
   }
   return i<len?i:-1;
}

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

int criterio(
      int e1, int e2)
{
   return e1-e2;
}

int length(
      string s)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
      ;
   return i;
}

string intToString(
      int n)
{
   string s, aux;
   while(n>0)
   {
      aux = n%10+'0';
      s = aux+s;
      n /= 10;
   }
   return s;
}

string lpad(
      string s, char c, int n)
{
   string s2;
   for(int j = 0; j<(n-length(s)); j++)
   {
      s2 += c;
   }
   s2 += s;
   return s2;
}

int stringToInt(
      string s)
{
   int n = 0, j = 0;
   for(int i = length(s)-1; i>=0; i--)
   {
      n += (s[i]-'0')*pow(10,j);
      j++;
   }
   return n;
}

bool isDigit(
      char c)
{
   if((c>='0')&&(c<='9'))
      return true;
   else
      return false;
}

int stringToIntN(
      string s, int n)
{
   int v = 0, j = 0, x;
   for(int i = length(s)-1; i>=0; i--)
   {
      if(isDigit(s[i]))
      {
         x = '0';
      }
      else
      {
         x = 'A'-10;
      }
      v += (s[i]-x)*pow(n,j);
      j++;
   }
   return v;
}

string intToStringBinary(
      int n)
{
   int x = n, y = 2, resto;
   string binario = "";
   while(x>=y)
   {
      resto = x%2;
      if(resto==1)
      {
         binario = '1'+binario;
      }
      else
      {
         binario = '0'+binario;
      }
      x /= y;
   }
   if(x==1)
   {
      binario = '1'+binario;
   }
   else
   {
      binario = '0'+binario;
   }
   return binario;
}

string invertirByte(
      string s, int n)
{
   string firstHalf = "", secondHalf = "";
   for(int i = 0; i<length(s); i++)
   {
      if(i<n)
      {
         firstHalf += s[i];
      }
      else
      {
         secondHalf += s[i];
      }
   }
   return (secondHalf+firstHalf);
}

void byteWrite(
      FILE* &f, unsigned char c)
{
   write<unsigned char>(f,c);
   return;
}

void integerWrite(
      FILE* &f, unsigned short int n)
{
   string y = invertirByte(lpad(intToStringBinary(n),'0',16),8);
   write<unsigned short int>(f,stringToIntN(y,2));
   return;
}

void csStringWrite(
      FILE* &f, string s)
{
   int l = length(s);
   if(l==0)
   {
      l = 0x00;
      byteWrite(f,l);
      return;
   }
   else
   {
      if(l>=255)
      {
         byteWrite(f,0xFF);
         integerWrite(f,l);
      }
      else
      {
         byteWrite(f,l);
      }
   }

   for(int i = 0; i<l; i++)
   {
      byteWrite(f,s[i]);
   }
   return;
}

void dateWrite(
      FILE* &f, int d, int m, int a)
{
   if(a>=2000)
   {
      a -= 2000;
   }
   else
   {
      a = 1999-a+100;
   }
   string fecha = lpad(intToStringBinary(a),'0',7)+lpad(intToStringBinary(m),'0',4)+lpad(intToStringBinary(d),'0',5);
   integerWrite(f,stringToIntN(fecha,2));
   return;
}

int main(
      int argc, char *argv[])
{

   ////////////
   // INICIO //
   ////////////

   /////////////////////////////////////////////
   // RECIBO NOMBRE DEl ARCHIVO POR PARAMETRO //
   /////////////////////////////////////////////
   if(argc==2)
   {
      cout<<"El argumento es: "<<argv[1]<<endl;
   }
   else
      if(argc>2)
      {
         cout<<"ERROR: Demasiados argumentos"<<endl;
         return 1;
      }
      else
      {
         cout<<"ERROR: Se espera un archivo de texto como argumento."<<endl;
         return 2;
      }

   FILE* f = fopen(argv[1],"w+b");

   //////////////////////////
   // INGRESO NRO DE SERIE //
   //////////////////////////

   unsigned short int integer;
   cout<<"Ingrese Numero de Serie del Archivo: "<<endl;
   cin>>integer;
   integerWrite(f,integer);

   ///////////////////////////////////////
   // OBTENGO Y GRABO RUTA DEL ARCHIVO //
   //////////////////////////////////////

   char ruta[MAX_PATH];
   GetModuleFileName(NULL,ruta,MAX_PATH);
   int fin;
   for(int i = 0; ruta[i]; i++)
   {
      if(ruta[i-1]=='\\')
      {
         fin = i;
      }
   }
   ruta[fin] = '\0';
   string r = ruta;
   string s = argv[1];
   csStringWrite(f,r+s);

   ///////////////////////////////////////
   // OBTENGO Y GRABO FECHA DEL SISTEMA //
   ///////////////////////////////////////

   int d, m, a;
   getDate(d,m,a);
   dateWrite(f,d,m,a);

   ////////////////////////////////
   // INGRESO CANT CAMPOS CUSTOM //
   ////////////////////////////////

   unsigned short int cantCampos;
   cout<<"Ingrese Cantidad de Campos Customizados: "<<endl;
   cin>>cantCampos;
   integerWrite(f,cantCampos);

   int codsCampos[cantCampos];
   string descCampos[cantCampos];

   /////////////////////////////////////
   // INGRESO CODIGOS Y DESCRIPCIONES //
   /////////////////////////////////////

   for(int i = 0; i<cantCampos; i++)
   {
      int x;
      string y;
      cout<<"Ingrese Codigo del Campo "<<i+1<<": "<<endl;
      cin>>x;
      cout<<"Ingrese Descripcion del Campo "<<i+1<<": "<<endl;
      cin>>y;
      codsCampos[i] = x;
      descCampos[i] = y;
      integerWrite(f,x);
      csStringWrite(f,y);
   }

   ////////////////////////////
   // INGRESO CANT REGISTROS //
   ////////////////////////////

   unsigned short int cantRegistros;
   cout<<"Ingrese Cantidad de Registros: "<<endl;
   cin>>cantRegistros;
   integerWrite(f,cantRegistros);

   ////////////////////////////////////////////////////
   // INGRESO CANT CAMPOS COMPLETOS DE CADA REGISTRO //
   ////////////////////////////////////////////////////

   for(int i = 0; i<cantRegistros; i++)
   {
      int x = cantCampos+1, y;
      while(x>cantCampos)
      {
         cout<<"Ingrese Cantidad de campos completos del Registro "<<i+1<<": "<<endl;
         cin>>x;
      }
      integerWrite(f,x);

      //////////////////////////////////////////
      // INGRESO CODIGO Y DESCRIPCION DE CADA //
      //   CAMPO COMPLETADO DE CADA REGISTRO  //
      //////////////////////////////////////////

      for(int j = 0; j<x; j++)
      {
         int z = -1;
         while(z<0)
         {
            cout<<"Ingrese del Registro "<<i+1<<" el Codigo del Campo "<<j+1<<" completado: "<<endl;
            for(int k = 0; k<cantCampos; k++)
            {
               cout<<"[codigo: "<<codsCampos[k]<<", descripcion: "<<descCampos[k]<<"]"<<endl;
            }
            cin>>y;
            z = find<int, int>(codsCampos,cantCampos,y,criterio);
         }
         integerWrite(f,y);
         string campo;
         cout<<"Ingrese "<<descCampos[z]<<": "<<endl;
         cin>>campo;
         csStringWrite(f,campo);
      }
   }

   fclose(f);

   /////////
   // FIN //
   /////////

   return 0;
}
