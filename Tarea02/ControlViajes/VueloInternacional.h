#ifndef VUELOINTERNACIONAL
#define VUELOINTERNACIONAL
#include "vuelo.h"
#include "pasajeroFrecuente.h"
#include "pasajeroNoFrecuente.h"


class VueloInternacional : protected Vuelo, protected pasajero_frecuente{

    private: //Atributos
        string destino;

    public: //Metodos
        VueloInternacional(string,string,string,string,string,string,float,float);

        void set_destino(string _destino);
        string get_destino();
        void ver_datosVueloInternacional();

        void ver_numeroVuelo();
        void ver_horaSalida();
        string ver_horaLlegada();

        ~VueloInternacional(){ //Destructor


        }

        friend void modifcarPasajerosInternacional(VueloInternacional& pasajero,string,string,float,float);
        friend void modificarVueloInternacional(VueloInternacional& internacional,string _numeroVuelo,string _horaSalida,string _horaLlegada,string _destino);

};

#endif // VUELOINTERNACIONAL


