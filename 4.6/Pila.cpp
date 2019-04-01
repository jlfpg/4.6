#include "Pila.h"
#include "cassert" // Para "assert()"


void Pila::push(int nuevoElemento) {
	insertar(0, nuevoElemento);
}

int Pila::pop() {
	assert(!isVacia()); // Precondición
	int resultado = verCima(); // Obtenemos la cima
	eliminar(0); // Eliminamos la cima
	return(resultado);
}

int Pila::verCima() {
	assert(!isVacia()); // Precondición
	return(getValor(0));
}

bool Pila::isVacia() {
	return (getN() == 0);
}



