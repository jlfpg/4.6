#include "iostream"
#include "Pila.h"
#include <string>

using namespace std;
string expresion;
int x;

void main() {

	Pila pila;
	cout << "Introduzca una expresion en postfijo:" << endl;
	cin >> expresion;
	x = expresion.length();
	
	for (int i = 0; i < x; i++) {
		if (expresion[i] == '+') {
			int num1 = pila.pop();
			int num2 = pila.pop();
			int suma = num1 + num2;
			pila.push(suma);
		}
		else if(expresion[i] == '*') {
			int num1 = pila.pop();
			int num2 = pila.pop();
			int multi = num1 * num2;
			pila.push(multi);
		}
		else {
			pila.push(expresion[i] - '0');
		}
	}
	cout << "Resultado = " << pila.pop() << endl;
}