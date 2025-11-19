#include <sstream>

#include "Alquiler.h"
int Alquiler::autonumerico = 0;

int Alquiler::getCantidadMeses()
{
	// COMPLETAR CON EL CODIGO CORRESPONDIENTE.
	// TENGA EN CUENTA LAS OPERACIONES IMPLEMENTADAS EN LA CLASE FECHA DADA
	return (this->fechaFin - this->fechaInicio);
}

Alquiler::Alquiler(int id, Fecha fechaI, Fecha fechaF, Inmueble &inm)
{
	this->codigo = ++autonumerico;
	this->idCliente = id;
	this->fechaInicio = fechaI;
	this->fechaFin = fechaF;
	// COMPLETAR INICIALIZACION SI ES NECESARIO
	this->inm = &inm;
}

// Implementado en cada clase hija
double Alquiler::calcularCosto()
{
	// MODIFICAR DE ACUERDO AL DISE�O
	return 0;
}

void Alquiler::listarInfo()
{
	cout << "Codigo de alquiler: " << this->codigo << endl;
	cout << "Id Cliente: " << this->idCliente << endl;
	cout << "Fecha de inicio: " << this->fechaInicio << endl;
	cout << "Fecha de fin: " << this->fechaFin << endl;
}

Alquiler::~Alquiler()
{
	// SI ES NECESARIO COMPLETAR EL DESTRUCTOR
}
