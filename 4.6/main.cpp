#include "iostream"
#include "Pila.h"
#include <string>

using namespace std;
string expresion;

void main() {
	Pila pila;

	cout << "Introduzca una expresion en postfijo:" << endl;
	cin >> expresion;

	int x = expresion.length();
	
	for (int i = 0; i < x; i++) {
		if (expresion[i] == '+') {
			int num1 = pila.pop();
			num1 = num1 - '0';
			int num2 = pila.pop();
			num2 = num2 - '0';
			int suma = num1 + num2;
			pila.push(suma);


		}
		else if(expresion[i] == '*') {
			int num1 = pila.pop();
			num1 = num1 - '0';
			int num2 = pila.pop();
			num2 = num2 - '0';
			int multi = num1 * num2;
			pila.push(multi);

		}
		else {
			pila.push(expresion[i]);
		}

	}

	cout << "Resultado = ";
	cout << pila.pop();
}