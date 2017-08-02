//============================================================================
// Name        : Ejercicio_01.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio_01
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
int main() {
	cout << "Ingrese una cadena:" << endl;
	string s;
	cin >> s;

	cout << "Hay " << length (s) << " caracteres en la cadena";

	return 0;
}
