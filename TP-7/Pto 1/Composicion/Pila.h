/*
 * Pila.h
 */

#ifndef PILA_H_
#define PILA_H_
#include <iostream>
#include "Producto.h"

using namespace std;
typedef Producto item;
const int indefinido=-999;

class Pila{
	int tope;
	item *arreglo;
	int MAX;
	item* reservarMemoria(int tama);

 public:
	Pila(int dim = 10);

	void push(int codigo, string desc, double price);
	item top();
	void pop();
	bool esPilavacia();
	void escribir();

	~Pila();
};

#endif  //PILA_H_