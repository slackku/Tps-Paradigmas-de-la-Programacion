#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
using namespace std;
class Pelicula
{
public:
    enum Tipo
    {
        N,
        I
    };

private:
    static int autoNumerico;
    int codigo;
    string titulo;
    string director;
    bool estreno;
    float precioBase;
    Tipo tipoPelicula;

public:
    Pelicula() : codigo(0), titulo(""), director(""), estreno(false), precioBase(0), tipoPelicula(N) {}
    Pelicula(string t, string d, bool e, float p, Tipo tP);
    Pelicula(const Pelicula &p);
    ~Pelicula();
    static int getAutoNumerico();
    void setDirector(string dir);
    void listarInformacion() const;
    float calcularCosto();
};

#endif