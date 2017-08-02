//============================================================================
// Name        : Ejercicio_33.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_33
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

bool tokenizer(
      string s, char sep, string& token, int& aux)
{
   token = "";
   int i = 0, j, cont = 0;
   while((cont<aux)&&(s[i]!='\0'))
   {
      if(s[i]==sep)
      {
         cont++;
      }
      i++;
   }
   if (s[i] == '\0'){
      return false;
   }
   aux++;
   for(j = i; (s[j]!=sep)&&(s[j]!='\0'); j++)
   {
      token += s[j];
   }
      return true;
}

int main()
{
   int cont = 0;
   cout<<"Ingrese un importe:"<<endl;
   int n;
   cin>>n;

   cout<<"Ingrese denominaciones:"<<endl;
   string s;
   cin>>s;

   string token = "";
   int aux = 0;
   while(tokenizer(s,',',token,aux))
      {
         while (n - stringToInt(token) >= 0){
            n -= stringToInt(token);
            cont++;
         }
         if (cont != 0){
            cout<<"Se necesitan " << cont << " billetes de $" << token << endl;
         }
         cont = 0;
      }
   return 0;
}
