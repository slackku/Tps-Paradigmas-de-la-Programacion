#include "Persona.h"
int main()
{
    cout << "=================" << endl;
    cout << "Creo Persona p1" << endl;
    Persona p1 = Persona("Solomon I", "Me gusta ser rey, creo", 30);
    cout << "Creo Persona p2" << endl;
    Persona p2 = Persona("Laplace", "Im not a demon", 666);
    cout << "Creo Persona p2 copiandole p2" << endl;
    Persona p3 = p2;
    cout << "=================" << endl;

    cout << "Informacion de personas" << endl;
    cout << "p1: Hola, soy " << p1.GetNombre() << ". " << p1.GetBio() << " y tengo " << p1.GetEdad() << " primaveras vividas" << endl;
 
    cout << "p2: Hola, soy " << p2.GetNombre() << ". " << p2.GetBio() << " y tengo " << p2.GetEdad() << " primaveras vividas" << endl;
    p2.~Persona();
    cout << "p3: Hola, soy " << p3.GetNombre() << ". " << p3.GetBio() << " y tengo " << p3.GetEdad() << " primaveras vividas" << endl;
    
    return 0;
}