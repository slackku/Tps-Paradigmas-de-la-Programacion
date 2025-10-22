//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Prueba.cpp
//============================================================================

#include <iostream>
#include "Pelicula.h"
using namespace std;

int main() {
	cout << "Valor inicial de la variable de clase autonumerico (0): " <<Pelicula::getAutonumerico()<<endl<<endl;

	//Se construye la pelicula P invocando al constructor por defecto
	Pelicula P;
	P.listarInformacion();
	Persona directorNuevo("Pedro","crack",20);
	P.setDirector(&directorNuevo);
	P.listarInformacion();

	//Se construye la pelicula Q invocando al constructor con parametros
	Pelicula Q("El Padrino",&directorNuevo, Fecha(1,10,2025), 11000, I);
	Q.listarInformacion();
	cout<<"Costo de la Pelicula: $"<<Q.calcularCosto()<<endl<<endl;

	//Se construye la pelicula R invocando al constructor copia
	Pelicula R(Q);
	//Se modifica el director de la pelicula R, copia de Q
	Persona directorParaR("Pepe","Cuenca",50);
	R.setDirector(&directorParaR);

	//Se lista la información de la pelicula Q y R
	R.listarInformacion();
	Q.listarInformacion();
	Persona directorParaL("Targa","capo",23);
	Pelicula L("CARS", &directorParaL, Fecha(10,5,2025), 11000, I);
	L.listarInformacion();

	return 0;
}
endif