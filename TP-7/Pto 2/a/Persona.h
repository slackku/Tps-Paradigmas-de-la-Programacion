#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre;
    string biografia;
    int edad;

public:
    Persona();
    Persona(string n, string b, int e);
    Persona(const Persona &otro);
    ~Persona();

    string GetNombre();
    string GetBio();
    int GetEdad();
};

#endif