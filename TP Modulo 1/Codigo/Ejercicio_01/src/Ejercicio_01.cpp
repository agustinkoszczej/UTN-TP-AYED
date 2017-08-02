//============================================================================
// Name        : Ejercicio_01.cpp
// Author      : Koszczej, Agustin
// Version     : 1.0
// Copyright   : Koszczej, Agustin
// Description : Ejercicio 01
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Ingrese dos numeros:" << endl;
	int a, b;
	cin >> a >> b;

	//Suma
	int resultado = a + b;
	cout << a << " + " << b << " = " << resultado << endl;

	//Resta
	resultado = a - b;
	cout << a << " - " << b << " = " << resultado << endl;
	//Producto
	resultado = a * b;
	cout << a << " x " << b << " = " << resultado << endl;

	return 0;
}
