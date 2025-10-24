//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Prueba.cpp
//============================================================================

#include <iostream>
#include "PeliculaNacional.h"
#include "PeliculaInternacional.h"
using namespace std;

int main()
{
	cout << "Valor inicial de la variable de clase autonumerico (0): " << Pelicula::getAutonumerico() << endl
		 << endl;

	// Se construye la pelicula P invocando al constructor por defecto
	PeliculaNacional PN;
	PeliculaInternacional PI;

	Persona director1("Solomon I", "Soy un rey creo", 34);
	Persona director2("Laplace", "Im not a demon", 666);

	PN.listarInformacion();
	cout << endl;
	PI.listarInformacion();

	PN.setDirector(&director1);
	PI.setDirector(&director2);
	cout << endl;

	PN.listarInformacion();
	cout << endl;
	PI.listarInformacion();

	// Se construye la pelicula Q invocando al constructor con parametros
	PeliculaNacional PN1("Peron 2", &director1, Fecha(1, 10, 3025), 11000);

	PN1.listarInformacion();
	cout << "Costo de la Pelicula: $" << PN1.calcularCosto() << endl
		 << endl;

	// Se construye la pelicula R invocando al constructor copia

	cout << "=========== COPIA ===========" << endl;
	PeliculaNacional PN1_copy(PN1);

	PN1_copy.listarInformacion();
	cout << endl;

	// Se modifica el director de la pelicula PN1_copy, copia de PN1
	Persona director3("Luis Ledesma", "Soy Lucho", 21);
	PN1_copy.setDirector(&director3);

	// Se lista la información de la pelicula Q y R
	PN1.listarInformacion();
	cout << endl;

	PN1_copy.listarInformacion();
	cout << endl;
	
	Persona director4("DIOS", "Si soy", 0);
	PeliculaInternacional PI2("CARS", &director4, Fecha(10, 5, 2025), 11000, "Todos lados");
	PI2.listarInformacion();

	return 0;
}
