//============================================================================
// Name        : Ejercicio_17.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_17
//============================================================================

#include <iostream>
using namespace std;

int length(
      string s)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
      ;
   return i;
}

string rpad(
      string s, char c, int n)
{
   string s2 = s;

   for(int j = 0; j<(n-length(s)); j++)
   {
      s2 += c;
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

string cpad(
      string s, char c, int n)
{
   string s2 = s;
   while(length(s2)<n)
   {
      s2 = lpad(s2,c,length(s2)+1);
      if(length(s2)<n)
      {
         s2 = rpad(s2,c,length(s2)+1);
      }
   }
   return s2;
}

int main()
{
   string s;
   char c;
   int n;
   s = "HOLA";
   c = 'x';
   n = 5;
   cout<<"La cadena quedo: '"<<cpad(s,c,n)<<"'"<<endl;

   return 0;
}
