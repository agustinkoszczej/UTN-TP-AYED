
//============================================================================
// Name        : Ejercicio_30.3.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_30.3
//============================================================================

#include <iostream>

using namespace std;

int tokenCount(
      string s, char sep)
{
   int j = 1;
   for(int i = 0; s[i]!='\0'; i++)
   {
      if(s[i]==sep)
      {
         j++;
      }
   }
   return j;
}


int length(
      string s)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
      ;
   return i;
}

void setTokenAt(
      string& s, string t, int i, char sep)
{
   int cont_sep = 0;
   string s2 = "";
   for(int j = 0; s[j]!='\0'; j++)
   {
      if(s[j]==sep)
      {
         cont_sep++;

      }
      if(cont_sep==i)
      {
         if((s[j]==sep)&&(j!=0))
         {
            s2 += sep+t;
         }
         else
         {
            if((j==0)&&(i==0))
            {
               s2 += t;
            }
            else{
               if (j==0){
                  s2 += sep+t;
               }
            }
         }
      }
      else
      {
         s2 += s[j];
      }
   }
   if((s[0]==sep)&&(i == 0))
   {
      s = t+s2;
   }
   else
   {
      s = s2;
   }
}

int main()
{
   string s, t;
   char sep;
   int i;

   s = "|George";
   //s = "John|Paul|George|Ringo";
   t = "Harrison";
   i = 1;
   sep = '|';
   int j = tokenCount(s, sep);
   for (int i = 0; i<j; i++){
   setTokenAt(s,t,i,sep);
   cout<<"La cadena quedo: "<<s<<endl;
   }
   return 0;
}
