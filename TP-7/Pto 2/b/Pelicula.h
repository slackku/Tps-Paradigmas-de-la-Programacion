//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Pelicula.h
//============================================================================

#ifndef PELICULA_H_
#define PELICULA_H_

#include "Fecha.h"
#include "Persona.h"
#include <iostream>
using namespace std;

enum produccion {N, I};

class Pelicula {

	static int autonumerico;
	int codigo;
	string titulo;
	Persona *director;
	Fecha estreno;
	float precioBase;
	enum produccion tipoPelicula;

public:
	//Constructor por defecto
	Pelicula();
	//Constructor con parametros
	Pelicula(string, Persona*, Fecha, float, enum produccion);
	//Constructor copia
	Pelicula(const Pelicula& P);



	bool esEstreno();
	void escribirBiografiaDirector();
	static int getAutonumerico();
	void setDirector(Persona*);
	void listarInformacion();
	float calcularCosto();

	//Destructor
	~Pelicula();

};

#endif /* PELICULA_H_ */
#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona(){
    nombre = "Indef";
    biografia = "indef";
    edad = 0;
}

Persona::Persona(string nombreP, string bioP, int edadP){
    this->nombre = nombreP;
    this->biografia = bioP;
    this->edad = edadP;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getBio(){
    return biografia;
}

int Persona::getEdad(){
    return edad;
}

Persona::~Persona(){
    nombre = "";
    biografia = "";
    edad = 0;
}
#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona{
    string nombre;
    string biografia;
    int edad;

    //getters
    public:
    string getNombre();
    string getBio();
    int getEdad();

    Persona();
    Persona(string nombreP, string bioP, int edadP);
    ~Persona();

};
