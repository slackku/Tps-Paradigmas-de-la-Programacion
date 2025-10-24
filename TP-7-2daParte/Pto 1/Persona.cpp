#include "Persona.h"

Persona::Persona() {}

Persona::Persona(string n, string b, int e)
{
    this->nombre = n;
    this->biografia = b;
    this->edad = e;
}

Persona::Persona(const Persona &p) : nombre(p.nombre), biografia(p.biografia), edad(p.edad) {}

string Persona::GetNombre()
{
    return this->nombre;
}

string Persona::GetBio()
{
    return this->biografia;
}

int Persona::GetEdad()
{
    return this->edad;
}

Persona::~Persona(){}