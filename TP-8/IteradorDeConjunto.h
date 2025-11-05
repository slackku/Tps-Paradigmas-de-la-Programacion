#ifndef ITERADOR_H_
#define ITERADOR_H_
#include "Conjunto.h"

class IteradorDeConjunto
{
    const Conjunto *conj;
    int currentIndex;
public:
    IteradorDeConjunto(const Conjunto *c) : conj(c), currentIndex(0) {};
    bool hayMasElementos()
    {
        return conj->MAX > currentIndex;
    };
    item elementoActual()
    {
        return conj->elementos[currentIndex];
    };
    void avanzar()
    {
        currentIndex++;
    };
};

#endif