#ifndef ITERADOR_INVERSO_H_
#define ITERADOR_INVERSO_H_
#include "Conjunto.h"
#include "Iterador.h"

template <typename T>
class IteradorInverso : public Iterador<T>
{
public:
    IteradorInverso(const Conjunto<T> *c) : Iterador<T>(c, getMax() - 1) {};
    bool hayMasElementos() override
    {
        return this->currentIndex >= 0;
    };
    void avanzar() override
    {
        this->currentIndex--;
    };
};

#endif