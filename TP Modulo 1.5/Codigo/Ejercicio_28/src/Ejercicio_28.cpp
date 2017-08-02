//============================================================================
// Name        : Ejercicio_28.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_28
//============================================================================

#include <iostream>

using namespace std;

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
   cout<<"Ingrese una cadena y el separador"<<endl;
   string s;
   char sep;
   cin>>s>>sep;

   cout<<"La cadena quedo:"<<endl;

   int aux = 0;
   string token;

   while(tokenizer(s,sep,token,aux))
   {
      cout<<token<<endl;
   }

   return 0;
}
