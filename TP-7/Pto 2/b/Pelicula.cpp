//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Pelicula.cpp
//============================================================================

#include "Pelicula.h"

int Pelicula::autonumerico = 0;

//Constructor por defecto
Pelicula::Pelicula(){
	this->codigo=0;
	this->titulo="";
	this->director=nullptr;
	this->estreno=Fecha(1,1,1);
	this->precioBase=0.0;
	this->tipoPelicula=N;
}

//Constructor con parametros
Pelicula::Pelicula(string titulo, Persona *director, Fecha estreno, float precio, enum produccion tipo){
	this->codigo=++(this->autonumerico);
	this->titulo=titulo;
	this->director=director;
	this->estreno=estreno;
	this->precioBase=precio;
	this->tipoPelicula=tipo;
}

//Constructor copia
Pelicula::Pelicula(const Pelicula& P){
	this->codigo=P.codigo;
	this->titulo=P.titulo;
	this->director=P.director;
	this->estreno=P.estreno;
	this->precioBase=P.precioBase;
	this->tipoPelicula=P.tipoPelicula;
}

int Pelicula::getAutonumerico(){
	return Pelicula::autonumerico;
}

void Pelicula::escribirBiografiaDirector(){
	if(this->director != nullptr){
		cout<<"Nombre: "<<director->getNombre()<<endl;
		cout<<"Edad: "<<director->getEdad()<<endl;
		cout<<"Biografia: "<<director->getBio()<<endl;;
	}
}

void Pelicula::setDirector(Persona *director){
	this->director = director;
}

void Pelicula::listarInformacion(){
	cout<<"Pelicula"<<"  (Direccion del Objeto: "<<this<<" )"<<endl;
	cout<<"  Codigo: "<<this->codigo<<endl;
	cout<<"  Titulo: "<<this->titulo<<endl;
	cout<<"  Director: "<<endl;
	this->escribirBiografiaDirector();
	cout<<"  Produccion: "<<((this->tipoPelicula==N)?"Nacional":"Internacional")<<endl;
	cout<<"  Estreno: "<<((this->esEstreno())?"SI":"NO")<<endl;
	cout<<"  Precio Base: "<<this->precioBase<<endl<<endl;
}

bool Pelicula::esEstreno(){
	if(Fecha() - estreno < 1){
		return true;
	}
	return false;
}

float Pelicula::calcularCosto(){
	float costo = this->precioBase;
	if(this->tipoPelicula == I)
		costo = costo*1.3;
	else
		if(!(this->esEstreno()))
			costo = costo*0.8;
	return costo;
}


//Destructor
Pelicula::~Pelicula(){
	cout<<"Se destruye la pelicula codigo:"<<this->codigo;
	cout<<"  (Direccion del Objeto destruido: "<<this<<" )"<<endl<<endl;
	this->codigo=0;
	this->titulo="";
	this->director=nullptr;
	this->estreno=Fecha(1,1,1);
	this->precioBase=0.0;
	this->tipoPelicula=N;
}


