#include "Pelicula.h"

int Pelicula::getAutoNumerico() const
{
    return this->autoNumerico;
}

void Pelicula::setDirector(string dir)
{
    this->director = dir;
}

void Pelicula::listarInformacion() const
{
    cout << "AN: " << getAutoNumerico() << endl;
    cout << "Codigo: " << this->codigo << endl;
    cout << "Titulo: " << this->titulo << endl;
    cout << "Director: " << this->director << endl;
    cout << "Estado: " << (this->estreno ? "Estrenada" : "Por estrenar") << endl;
    cout << "Tipo: " << (this->tipoPelicula == N ? "Normal" : "Infantil") << endl;
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

Pelicula::Pelicula(const Pelicula &p)
    : autoNumerico(p.autoNumerico),
      codigo(p.codigo),
      titulo(p.titulo),
      director(p.director),
      estreno(p.estreno),
      precioBase(p.precioBase),
      tipoPelicula(p.tipoPelicula)
{
}