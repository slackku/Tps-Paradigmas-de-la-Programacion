#include <iostream>
using namespace std;
class Pelicula
{
public:
    enum Tipo
    {
        N,
        I
    };

private:
    int autoNumerico;
    int codigo;
    string titulo;
    string director;
    bool estreno;
    float precioBase;
    Tipo tipoPelicula;

public:
    Pelicula() : autoNumerico(0), codigo(0), titulo("Pelicula"),
                 director("Director"), estreno(false), precioBase(0), tipoPelicula(N) {}
    Pelicula(int a, int c, string t, string d, bool e, float p, Tipo tP)
        : autoNumerico(a), codigo(c), titulo(t), director(d),
          estreno(e), precioBase(p), tipoPelicula(tP) {};
    Pelicula(const Pelicula &p);
    ~Pelicula();
    int getAutoNumerico() const;
    void setDirector(string dir);
    void listarInformacion() const;
    float calcularCosto();
};