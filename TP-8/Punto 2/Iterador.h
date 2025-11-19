#ifndef ITERADOR_H_
#define ITERADOR_H_
#include "Conjunto.h"

template<typename T>
class Iterador
{
protected:
    const Conjunto<T> *conj;
    int currentIndex;
    int getMax() { return conj->MAX; };

public:
    Iterador(const Conjunto<T> *c, int initialIndex) : conj(c), currentIndex(initialIndex) {};
    virtual ~Iterador() {};
    virtual bool hayMasElementos() = 0;
    virtual void avanzar() = 0;
    T elementoActual()
    { 
        return conj->elementos[currentIndex];
    };
};

template<typename T>
void mostrarContenido(Iterador<T>& iterator){
    cout << "--- Mostrando Contenido ---" << endl;
	while(iterator.hayMasElementos())
    {
		cout << "Elemento actual: " << iterator.elementoActual() << endl;
		iterator.avanzar();
    }
    cout << "---------------------------" << endl;
}

#endif