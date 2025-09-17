//============================================================================
// Name        : pruebaADTVector.cpp
//============================================================================

#include <iostream>
#include "Vector.h"
#include "ioVector.h"
// #include "Vector.cpp"
using namespace std;

int main()
{
	const unsigned int MAX = 8;

	// Creo un objeto Vector con el constructor
	Vector F = crearVector(MAX);
	// Controlo si el vector fue creado e inicializada correctamente con el constructor
	if (capacidad(F) == MAX)
	{
		bool correcto = true;
		for (unsigned int i = 1; i <= MAX; i++)
		{
			if (elemento(F, i) != indef)
			{
				cout << "El vector NO se inicializó correctamente en la posición " << i << endl;
				correcto = false;
			}
		}
		if (correcto)
		{
			cout << "El vector se inicializo correctamente" << endl;
		}
	}
	else
	{
		cout << "El vector NO se inicializo con la capacidad indicada" << endl;
	}

	cout << "Contenido del vector vacio" << endl;
	cout << F << endl;

	// Ingreso 2 items al vector utilizando la función miembro insertar
	F = insertar(F, 1, 10);
	F = insertar(F, 3, 30);

	elemento(F, 5) = 50;
	elemento(F, 7) = 70;

	cout << "Contenido del vector" << endl;
	cout << F << endl;

	cout << "Contenido del vector en la posición 7 (70): " << elemento(F, 7) << endl;
	cout << "DEBUG: " << elemento(F,3) << endl;
	int some = elemento(F,2);
	cout << "Contenido del vector en la posición 2 (indef): " << elemento(F, 2) << endl;

	// Pruebo leer un objeto vector utilizando el operador de extracción de flujo sobrecargado (>>)
	cout << "Ingrese los " << capacidad(F) << " elementos del vector" << endl;
	// cin>>F;

	// Pruebo escribir por pantalla un objeto vector utilizando el operador de inserción de flujo (<<)
	cout << "El vector contiene los siguientes elementos: " << F << endl;

	// Escribo la capacidad del vector y su contenido
	cout << "La capacidad del vector es: " << capacidad(F) << endl;

	cout << "Contenido del vector" << endl;
	cout << F << endl;

	// Pruebo insertar un elemento en una posición que supera la capacidad asignada al vector, éste debería crecer dinamicamente
	F = insertar(F, 20, 200);

	// Escribo la nueva capacidad del vector y su contenido
	cout << "La capacidad del vector luego de redimensionar el mismo es: " << capacidad(F) << endl;

	cout << "Contenido del vector luego de redimensionar el mismo" << endl;
	cout << F << endl;

	// Borro el elemento que se encuentra en la posición 7
	F = borrar(F, 7);
	cout << "Contenido del vector en la posición 7 luego de borrar el elemento de esa posicion (indef): " << elemento(F, 7) << endl;

	cout << "Contenido del vector luego de borrar el elemento de la posición 7" << endl;
	cout << F << endl;

	// Borro todos los elementos del vector
	F = borrar(F);

	cout << "Contenido del vector luego de borrar todos los elemnetos" << endl;
	cout << F << endl;

	F = insertar(F, 1, 10);
	F = insertar(F, 5, 50);
	F = insertar(F, 10, 100);
	F = insertar(F, 15, 150);
	F = insertar(F, 20, 200);

	Vector F2 = crearVector(5);

	// Se espera mensaje: Los vectores NO son iguales
	if (F == F2)
	{
		cout << "Los vectores son iguales" << endl;
	}
	else
	{
		cout << "Los vectores NO son iguales" << endl;
	}

	F2 = insertar(F2, 1, 10);
	F2 = insertar(F2, 5, 50);
	F2 = insertar(F2, 10, 100);

	// Se espera mensaje: Los vectores NO son iguales
	if (F == F2)
	{
		cout << "Los vectores son iguales" << endl;
	}
	else
	{
		cout << "Los vectores NO son iguales" << endl;
	}

	F2 = insertar(F2, 15, 150);
	F2 = insertar(F2, 20, 200);

	// Se espera mensaje: Los vectores son iguales
	if (F == F2)
	{
		cout << "Los vectores son iguales" << endl;
	}
	else
	{
		cout << "Los vectores NO son iguales" << endl;
	}

	F = destruir(F);
	F2 = destruir(F2);

	cout << "Capacidad vector F (0): " << capacidad(F) << endl;
	cout << "Capacidad vector F2 (0): " << capacidad(F2) << endl;

	return 0;
}