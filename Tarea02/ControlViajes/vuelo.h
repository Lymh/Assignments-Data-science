#ifndef VUELO
#define VUELO
#include <iostream>
#include <stdlib.h>
using namespace std;

class Vuelo{

private:  //Creamos los atributos
    string numeroVuelo;
    string horaSalida;
    string horaLlegada;

public:     //Creamos los metodos
    Vuelo(string,string,string);
    void set_numeroVuelo(string);
    void set_horaLlegada(string _horaLlegada);
    void set_horaSalida(string _horaSalida);

    string get_numeroVuelo();
    string get_horaLlegada();
    string get_horaSalida();

    ~Vuelo(){  //Destructor

    }
};//______________________________________
#endif // VUELO

