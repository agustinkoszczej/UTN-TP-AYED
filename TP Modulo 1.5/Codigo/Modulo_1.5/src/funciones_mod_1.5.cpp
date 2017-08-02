#include <iostream>
#include <math.h>

using namespace std;

//Ejercicio 1
int length(
      string s)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
      ;
   return i;
}

//Ejercicio 2
bool isEmpty(
      string s)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
      ;
   if(i==0)
      return true;
   else
      return false;
}

//Ejercicio 3
int indexOf(
      string s, char c)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
   {
      if(s[i]==c)
         return i;
   }
   return -1;
}

//Ejercicio 4
int lastIndexOf(
      string s, char c)
{
   int i;

   for(i = length(s); i>=0; i--)
   {
      if(s[i]==c)
         return i;
   }
   return -1;
}

//Ejercicio 4.1
int indexOfN(
      string s, char c, int n)
{
   int i, cont = 0;
   for(i = 0; s[i]!='\0'; i++)
   {
      if(s[i]==c)
      {
         cont++;
         if(cont==n)
            return i;
      }
   }
   return -1;
}

//Ejercicio 5
bool contains(
      string s, char c)
{
   int i;
   for(i = 0; s[i]!='\0'; i++)
   {
      if(s[i]==c)
         return true;
   }
   return false;
}

//Ejercicio 6
int replace(
      string& s, char oldChar, char newChar)
{
   int i, cont = 0;
   for(i = 0; s[i]!='\0'; i++)
   {
      if(s[i]==oldChar)
      {
         s[i] = newChar;
         cont++;
      }
   }
   return cont;
}

//Ejercicio 7
string substring(
      string s, int i, int j)
{
   string s2 = "";
   for(int k = i; k<j; k++)
   {
      s2 += s[k];
   }
   return s2;
}

//Ejercicio 8
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

//Ejercicio 9
string removeAt(
      string s, int i)
{
   string s2;

   for(int j = 0; s[j]!='\0'; j++)
   {
      if(j!=i)
         s2 += s[j];
   }

   return s2;
}

//Ejercicio 10
string ltrim(
      string s)
{
   string s2;
   int i = 0;
   while(s[i]==' ')
   {
      i++;
   }
   for(int j = i; s[j]!='\0'; j++)
   {
      s2 += s[j];
   }
   return s2;
}

//Ejercicio 11
string rtrim(
      string s)
{
   string s2;
   int i;

   for(i = 0; s[i]!='\0'; i++)
      ;
   i--;
   while((s[i]==' ')&&(i>=0))
   {
      i--;
   }
   for(int j = 0; j<=i; j++)
   {
      s2 += s[j];
   }
   return s2;
}

//Ejercicio 12
string trim(
      string s)
{
   return ltrim(rtrim(s));
}

//Ejercicio 13
string replicate(
      int n, char c)
{
   string s;
   for(int i = 0; i<n; i++)
   {
      s += c;
   }
   return s;
}

//Ejercicio 14
string spaces(
      int n)
{
   string s;
   for(int i = 0; i<n; i++)
   {
      s += ' ';
   }
   return s;
}

//Ejercicio 15
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

//Ejercicio 16
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

//Ejercicio 17
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

//Ejercicio 18
string intToString(
      int n, int v)
{
   string s, aux;
   while(n>0)
   {
      aux = n%10+'0';
      s = aux+s;
      n /= 10;
   }

   s = replicate(v,'0')+s;

   return s;
}

//Ejercicio 19
bool isLetter(
      char c)
{
   if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
      return true;
   else
      return false;
}

//Ejercicio 20
bool isUpperCase(
      char c)
{
   if((c>='A')&&(c<='Z'))
   {
      return true;
   }
   else
   {
      return false;
   }
}

//Ejercicio 21
bool isLowerCase(
      char c)
{
   if((c>='a')&&(c<='z'))
   {
      return true;
   }
   else
   {
      return false;
   }
}

//Ejercicio 22
char toUpperCase(
      char c)
{
   if(isLowerCase(c))
   {
      return c-32;
   }
   else
   {
      return c;
   }
}

//Ejercicio 23
char toLowerCase(
      char c)
{
   if(isLowerCase(c)==false)
   {
      return c+32;
   }
   else
   {
      return c;
   }
}

//Ejercicio 24
bool isDigit(
      char c)
{
   if((c>='0')&&(c<='9'))
      return true;
   else
      return false;
}

//Ejercicio 25
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

//Ejercicio 26
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

//Ejercicio 27
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

//Ejercicio 28
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
   if(s[i]=='\0')
   {
      return false;
   }
   aux++;
   for(j = i; (s[j]!=sep)&&(s[j]!='\0'); j++)
   {
      token += s[j];
   }
   return true;
}

//Ejercicio 29
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

//Ejercicio 30
string getTokenAt(
      string s, char sep, int i)
{
   int k = -1;
   string s2;
   for(int j = 0; (s[j]!='\0')&&(k!=i); j++)
   {
      if((s[j]==sep)||(s[j]=='\0'))
      {
         k++;
      }
      if((k+1==i)&&(s[j]!=sep))
      {
         s2 += s[j];
      }
   }
   return s2;
}

//Ejercicio 30.1
int findToken(
      string s, string t, char sep)
{
   string s2;
   int j = -1;

   for(int i = 0; s[i]!='\0'; i++)
   {
      if((s[i]!=sep)&&(s[i+1]!='\0'))
      {
         s2 += s[i];
      }
      else
      {
         if(s[i+1]=='\0')
         {
            s2 += s[i];
         }
         j++;
         if(s2==t)
         {
            return j;
         }
         s2 = "";
      }
   }
   return -1;
}

//Ejercicio 30.2
void addToken(
      string& s, string t, char sep)
{
   if((s[length(s)-1]==sep)||(length(s)==0))
   {
      s += t;
   }
   else
   {
      s += sep+t;
   }
}

//Ejercicio 30.3
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
            else
            {
               if(j==0)
               {
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
   if((s[0]==sep)&&(i==0))
   {
      s = t+s2;
   }
   else
   {
      s = s2;
   }
}

//Ejercicio 31
string reversa(
      string s)
{
   string s2 = "";
   for(int i = 0; s[i]!='\0'; i++)
   {
      s2 = s[i]+s2;
   }
   return s2;
}

//Ejercicio 32
bool capicua(
      string s)
{
   if(reversa(s)==s)
   {
      return true;
   }
   else
   {
      return false;
   }
}

//Ejercicio 33
void Ejercicio_33()
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
      while(n-stringToInt(token)>=0)
      {
         n -= stringToInt(token);
         cont++;
      }
      if(cont!=0)
      {
         cout<<"Se necesitan "<<cont<<" billetes de $"<<token<<endl;
      }
      cont = 0;
   }
}
//Ejercicio 34

