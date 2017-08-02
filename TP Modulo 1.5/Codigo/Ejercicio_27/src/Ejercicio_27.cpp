//============================================================================
// Name        : Ejercicio_27.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_27
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

int length(
      string s)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
      ;
   return i;
}

string insertAt(
      string s, char c, int i)
{
   string s2;

   for(int j = 0; j<length(s); j++)
   {
      if(j!=i)
         s2 += s[j];
      else
      {
         s2 += c;
         i -= 2;
         j--;
      }
   }

   return s2;
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

string intToString(
      int n, int v)
{
   int i = 0;
   string s, aux;
   while(n>0)
   {
      aux = n%10+'0';
      s = aux+s;
      n /= 10;
   }

   return s;
}

string doubleToString(
      int n, double v, int dec)
{
   string s;
   int i = 0;
   double aux = v, aux2 = v;

   while(aux!=0)
   {
      aux = aux2-(int)aux2;
      if(aux!=0)
      {
         i++;
         aux2 *= 10;
      }
   }
   s = intToString(aux2,0);
   s = insertAt(s,'.',length(s)-i);

   for(i = 0; s[i]!='.'; i++)
      ;

   for(int j = i; j<=i+dec; j++)
   {
      if(s[j]=='\0')
      {
         s += '0';
      }
   }
   return (lpad(s,'0',n));
}

int main()
{
   cout<<"Ingrese longitud, numero y parte decimal"<<endl;
   int n, dec;
   double v;
   cin>>n>>v>>dec;
   cout<<"La cadena quedo: '"<<doubleToString(n,v,dec)<<"'"<<endl;

   return 0;
}
