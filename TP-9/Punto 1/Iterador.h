#ifndef ITERADOR_H_
#define ITERADOR_H_
#include "Conjunto.h"

class Iterador
{
protected:
    const Conjunto *conj;
    int currentIndex;
    int getMax() { return conj->MAX; };

public:
    Iterador(const Conjunto *c, int initialIndex) : conj(c), currentIndex(initialIndex) {};
    virtual ~Iterador() {};
    virtual bool hayMasElementos() = 0;
    virtual void avanzar() = 0;
    item elementoActual()
    {
        return conj->elementos[currentIndex];
    };
};

void mostrarContenido(Iterador& iterator){
	while(iterator.hayMasElementos())
    {
		cout << "Elemento actual: " << iterator.elementoActual() << endl;
		iterator.avanzar();
    }
}

#endif