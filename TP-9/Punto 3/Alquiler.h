#ifndef ALQUILER_H_
#define ALQUILER_H_

#include <iostream>
#include "Inmueble.h"
#include "Fecha.h"

using namespace std;

class Alquiler
{
protected:
	static int autonumerico;
	int codigo;
	int idCliente;
	Fecha fechaInicio;
	Fecha fechaFin;
	
	// COMPLETAR ATRIBUTOS SI ES NECESARIO
	Inmueble *inm;
	int getCantidadMeses();

public:
	Alquiler(int id, Fecha fechaI, Fecha fechaF, Inmueble &inm);
	virtual double calcularCosto() = 0;
	void listarInfo();
	virtual ~Alquiler();
};

#endif /* ALQUILER_H_ */
