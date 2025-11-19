#ifndef ITERADOR_IMPAR_H_
#define ITERADOR_IMPAR_H_
#include "Conjunto.h"
#include "Iterador.h"

template <typename T>
class IteradorImpar : public Iterador<T>
{
public:
    IteradorImpar(const Conjunto<T> *c) : Iterador<T>(c, 0) {};
    bool hayMasElementos() override
    {
        return this->currentIndex < this->getMax();
    };
    void avanzar() override
    {
        this->currentIndex += 2; // 1er -> 3er -> 5to -> ... [Elemento impar, no ordinal]
    };
};

#endif