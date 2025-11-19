#include "Inmobiliaria.h"
#include "Permanente.h"
#include "Temporal.h"

Inmobiliaria::Inmobiliaria(int cod, string nomb, string cuit)
{
	this->codigoAFIP = cod;
	this->nombreEmpresa = nomb;
	this->CUIT = cuit;

	// COMPLETAR INICIALIZACI�N DE ATRIBUTOS SI ES NECESARIO
	this->alquileres = vector<Alquiler *>();
}

void Inmobiliaria::alquilar(int id, Fecha fechaI, Fecha fechaF, Inmueble &inm)
{

	// COMPLETAR DE ACUERDO A LOS PARAMETROS RECIBIDOS

	/*
	 * El tipo de alquiler se determina teniendo en cuenta la duraci�n.
	 * Un alquiler de 6 meses o mas corresponde a un alquiler Permanente,
	 * en otro caso, se considera un alquiler de tipo Temporal.
	 */

	Alquiler *nuevoAlquiler = nullptr;
	if (fechaF - fechaI >= 6)
		nuevoAlquiler = new Permanente(id, fechaI, fechaF, inm);
	else
		nuevoAlquiler = new Temporal(id, fechaI, fechaF, inm);
	this->alquileres.push_back(nuevoAlquiler);
}

void Inmobiliaria::resumen()
{
	// COMPLETAR DE ACUERDO AL DIAGRAMA UML
	double comision = 0;
	for (Alquiler *A : this->alquileres)
	{
		A->listarInfo();
		comision += A->calcularCosto() * 0.1;
		cout << "-----------" << endl;
	}
	cout << "Comision: " << comision << endl;
}

Inmobiliaria::~Inmobiliaria()
{
	// SI ES NECESARIO COMPLETAR EL DESTRUCTOR
	for (Alquiler *A : this->alquileres)
	{
		delete A;
	}
}
