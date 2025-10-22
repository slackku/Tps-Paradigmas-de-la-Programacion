/*
 * Pila.cpp
 */
#include <iostream>
#include "Pila.h"

using namespace std;

item * Pila:: reservarMemoria(int dim){
	item *reserva = new item[dim];
	if(reserva==NULL){
		cout<<"Problema: no se pudo realizar la reserva"; 
	}
	return reserva;
}

Pila::Pila(int dim){
	MAX = dim >0 ? dim : 10;
	tope=-1;
	arreglo = reservarMemoria(MAX);
}

void Pila ::push(item producto){
	if(tope+1 <MAX){
		tope++;
		arreglo[tope] = producto;
	}
}

void Pila:: pop(){
	if(tope>=0){
		tope--;
	}
}

item Pila:: top(){
	if(!esPilavacia())
		return arreglo[tope];
	else
		return nullptr;
}

bool Pila:: esPilavacia(){
	return tope==-1;
}

void Pila::escribir(){
	cout << endl<<" PILA INT: (implementación Pila de int)" << endl;
	for(int i=tope; i>=0;i-- ){
		arreglo[i]->listarInformacion();
	}
}

Pila::~Pila(){
	tope = -1;
	MAX = 0;
	delete [] arreglo;
}
