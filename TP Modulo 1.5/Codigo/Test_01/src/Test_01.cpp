//============================================================================
// Name        : Test_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

struct Coll
{
string s;
};

struct Persona
{
   int dni;
   string nombre;
};

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


Persona personaCreate(
      int dni, string nom)
{
   Persona p;
   p.dni = dni;
   p.nombre = nom;
   return p;
}
string personaToString(
      Persona p)
{
   return intToString(p.dni)+","+p.nombre;
}
Persona stringToPersona(
      string s)
{
   Persona p;
   p.dni = stringToInt(getTokenAt(s,',', 0));
   p.nombre = getTokenAt(s,',', 1);
   return p;
}
int personaCompareDNI(
      Persona p, int dni)
{
   return p.dni-dni;
}

Coll collCreate(){
   Coll a;
   a.s = "";
   return a;
}
int main()
{
   Coll c = collCreate();
   collAdd<Persona>(c, personaCreate(10,"Pedro"), personaToString);
   collAdd<Persona>(c, personaCreate(20,"Pablo"), personaToString);
   collAdd<Persona>(c, personaCreate(30,"Juan"), personaToString);
   for(int i = 0; i<collSize(c); i++)
   {
      Persona v = collGetAt<Persona>(c, i, stringToPersona);
      cout<<v.dni<<","<<v.nombre<<endl;
   }
   int dni;
   cout<<"Ingrese un dni: ";
   cin>>dni;
// busco una persona x DNI... la encuentro en la posicion: pos
   int pos = collFind<Persona, int>(c,dni,personaCompareDNI,stringToPersona);
// obtengo la persona ubicada en la posicion pos de la coleccion
   Persona pers = collGetAt<Persona>(c, pos, stringToPersona);
   cout<<pers.dni<<","<<pers.nombre<<endl;
   return 0;
}
