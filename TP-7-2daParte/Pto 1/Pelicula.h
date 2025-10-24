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

enum produccion
{
	N,
	I
};

class Pelicula
{
protected:
	static int autonumerico;
	int codigo;
	string titulo;
	Persona *director;
	Fecha estreno;
	float precioBase;
	
	public:
	// Constructor por defecto
	Pelicula();
	// Constructor con parametros
	Pelicula(string, Persona *, Fecha, float);
	// Constructor copia
	Pelicula(const Pelicula &P);
	
	bool esEstreno();
	void escribirBiografiaDirector();
	static int getAutonumerico();
	void setDirector(Persona *);
	virtual void listarInformacion();
	virtual float calcularCosto();

	// Destructor
	~Pelicula();
};

#endif