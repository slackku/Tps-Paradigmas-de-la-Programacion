#ifndef INMOBILIARIA_H_
#define INMOBILIARIA_H_

#include <iostream>
#include <vector>
#include "Alquiler.h"

class Inmobiliaria
{
	int codigoAFIP;
	string nombreEmpresa;
	string CUIT;

	// COMPLETAR ATRIBUTOS SI ES NECESARIO
	vector<Alquiler *> alquileres;

public:
	Inmobiliaria(int cod, string nom, string cuit);
	void alquilar(int id, Fecha fechaI, Fecha fechaF, Inmueble &inm);
	void resumen();
	virtual ~Inmobiliaria();
};

#endif /* INMOBILIARIA_H_ */
