#pragma once
#include "ListaEnlazada.h"

// Clase que implementa una pila de elementos. La pila se implementa mediante una lista enlazada.
// La cima de la pila ser� el primer elemento de la lista
class Pila : public ListaEnlazada
{
public:

	// Mete un nuevo elemento en la cima de la pila
	// Par�metro: nuevo elemento que copiaremos en la cima
	// Complejidad temporal y espacial: O(1)
	void push(int nuevoElemento);

	// Obtiene el elemento que est� en la cima y lo borra de ah�
	// Retorno: una copia del elemento que est� en la cima
	// Precondici�n: la pila no est� vac�a
	// Complejidad temporal y espacial: O(1)
	int pop();

	// Obtiene el elemento que est� en la cima sin borrarlo de ah�
	// Retorno: una copia del elemento que est� en la cima
	// Precondici�n: la pila no est� vac�a
	// Complejidad temporal y espacial: O(1)
	int verCima();

	// Comprueba si la pila est� vac�a
	// Retorno: verdadero si est� vac�a, falso si no lo est�
	// Complejidad temporal y espacial: O(1)
	bool isVacia();

};

