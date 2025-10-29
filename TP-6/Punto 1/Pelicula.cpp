#include "Pelicula.h"

int Pelicula::autoNumerico = 0;

Pelicula::Pelicula(string t, string d, bool e, float p, Tipo tP)
{
    this->codigo = ++autoNumerico;
    this->titulo = t;
    this->director = d;
    this->estreno = e;
    this->precioBase = p;
    this->tipoPelicula = tP;
}

int Pelicula::getAutoNumerico()
{
    return autoNumerico;
}

void Pelicula::setDirector(string dir)
{
    this->director = dir;
}

void Pelicula::listarInformacion() const
{
    cout << "Codigo: " << this->codigo << endl;
    cout << "Titulo: " << this->titulo << endl;
    cout << "Director: " << this->director << endl;
    cout << "Estado: " << (this->estreno ? "Estrenada" : "Por estrenar") << endl;
    cout << "Tipo: " << (this->tipoPelicula == N ? "Nacional" : "Internacional") << endl;
}

float Pelicula::calcularCosto()
{
    float costo = this->precioBase;
    if (this->tipoPelicula == N)
        costo += costo * 1.30;
    if (this->tipoPelicula == I)
        costo += costo * 0.80;
    return costo;
}

Pelicula::~Pelicula()
{
    cout << "Objeto destruido de codigo: " << codigo << endl;
}

Pelicula::Pelicula(const Pelicula &p) : codigo(p.codigo),
                                        titulo(p.titulo),
                                        director(p.director),
                                        estreno(p.estreno),
                                        precioBase(p.precioBase),
                                        tipoPelicula(p.tipoPelicula)
{
}