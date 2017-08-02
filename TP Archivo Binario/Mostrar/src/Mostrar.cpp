//============================================================================
// Name        : Mostrar.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : TP Archivo Binario - Mostrar
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

template<typename T> T read(
      FILE* f)
{
   T buff;
   fread(&buff,sizeof(T),1,f);
   return buff;
}

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

int criterio(
      int e1, int e2)
{
   return e1-e2;
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

int byteRead(
      FILE* f)
{
   int x = read<unsigned char>(f);
   return x;
}

int integerRead(
      FILE* f)
{
   int x = read<unsigned short int>(f);
   string y = invertirByte(lpad(intToStringBinary(x),'0',16),8);
   return stringToIntN(y,2);
}
string csStringRead(
      FILE* f)
{
   int x = byteRead(f);
   if((x<=0) or (x>=255))
   {
      if(x==0x00)
      {
         x = 0;
      }
      else
      {
         x = integerRead(f);
      }
   }
   string y = "";
   for(int i = 0; i<x; i++)
   {
      y += read<char>(f);
   }
   return y;
}

string dateRead(
      FILE* f)
{
   string fecha = "";
   unsigned int x = integerRead(f);
   string y = lpad(intToStringBinary(x),'0',16);
   string z = "";
   for(int i = 0; i<7; i++)
   {
      z += y[i];
   }
   int a = stringToIntN(z,2);
   if(a<100)
   {
      a += 2000;
   }
   else
   {
      if(a>=100)
      {
         a = 1999-a+100;
      }
   }
   fecha += intToString(a);
   z = "";
   for(int i = 7; i<11; i++)
   {
      z += y[i];
   }
   a = stringToIntN(z,2);
   fecha += '/'+intToString(a);
   z = "";
   for(int i = 11; i<16; i++)
   {
      z += y[i];
   }
   a = stringToIntN(z,2);
   fecha += '/'+intToString(a);
   return fecha;
}

void integerWrite(
      FILE* &f, unsigned short int n)
{
   string y = invertirByte(lpad(intToStringBinary(n),'0',16),8);
   write<unsigned short int>(f,stringToIntN(y,2));
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
   // RECIBO NOMBRE DEL ARCHIVO POR PARAMETRO //
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

   FILE* f = fopen(argv[1],"r+b");

   /////////////
   // MUESTRO //
   /////////////

   cout<<"----[CONTENIDO DEL ARCHIVO]--------------------"<<endl;
   cout<<"Nro. de Serie: "<<integerRead(f)<<endl;
   cout<<"Full Filename: "<<csStringRead(f)<<endl;
   long posFecha = ftell(f);
   cout<<"Fecha Modificacion: "<<dateRead(f)<<endl;
   int cantCampos = integerRead(f);
   cout<<"Cantidad de Campos Customizados: "<<cantCampos<<endl;
   int codsCampos[cantCampos];
   string descCampos[cantCampos];
   for(int i = 0; i<cantCampos; i++)
   {
      codsCampos[i] = integerRead(f);
      descCampos[i] = csStringRead(f);
      cout<<"Campo [codigo: "<<codsCampos[i]<<", descripcion: "<<descCampos[i]<<"]"<<endl;
   }
   int cantRegistros = integerRead(f);
   cout<<"Cantidad de Registros: "<<cantRegistros<<endl;
   cout<<"-----------------------"<<endl;
   for(int i = 0; i<cantRegistros; i++)
   {
      int camposCompletos = integerRead(f);
      for(int j = 0; j<camposCompletos; j++)
      {
         int x = find<int, int>(codsCampos,cantCampos,integerRead(f),criterio);
         if(x>=0)
         {
            cout<<descCampos[x]<<": ";
            cout<<csStringRead(f)<<endl;
         }
      }
      if(i+1!=cantRegistros)
      {
         cout<<"-----------------------"<<endl;
      }
   }
   cout<<"----[FIN CONTENIDO DEL ARCHIVO]-----------------"<<endl;

   ////////////////////////////////////////
   // ACTUALIZO FECHA CON LA DEL SISTEMA //
   ////////////////////////////////////////

   fseek(f,posFecha,SEEK_SET);
   int d, m, a;
   getDate(d,m,a);
   dateWrite(f,d,m,a);

   fclose(f);

   /////////
   // FIN //
   /////////

   return 0;
}
