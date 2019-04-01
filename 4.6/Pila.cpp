#include "Pila.h"
#include "cassert" // Para "assert()"


void Pila::push(int nuevoElemento) {
	insertar(0, nuevoElemento);
}

int Pila::pop() {
	assert(!isVacia()); // Precondici�n
	int resultado = verCima(); // Obtenemos la cima
	eliminar(0); // Eliminamos la cima
	return(resultado);
}

int Pila::verCima() {
	assert(!isVacia()); // Precondici�n
	return(getValor(0));
}

bool Pila::isVacia() {
	return (getN() == 0);
}



