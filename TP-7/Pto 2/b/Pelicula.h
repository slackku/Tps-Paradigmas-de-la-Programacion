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