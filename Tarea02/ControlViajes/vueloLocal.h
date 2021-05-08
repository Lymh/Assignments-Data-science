
#ifndef VUELOLOCAL
#define VUELOLOCAL
#include "vuelo.h"
#include "pasajeroFrecuente.h"
#include "pasajeroNoFrecuente.h"
class VueloLocal : protected Vuelo, protected pasajero_frecuente{

    private:  //Atributos
        int numeroMinimoPasajeros;
        string categoria;

    public:    //Metodos
        VueloLocal(string _numeroVuelo,string _horaSalida,string _horaLlegada,int _numeroMinimoPasajeros,string _categoria,string _codigo,string _nombre,float _precioBoleto,float _impuesto);

        void set_numeroMinimoPasajeros(int _numeroMinimoPasajeros);
        void set_categoria(string _categoria);

        int get_numeroMinimoPasajeros();
        string get_categoria();
        void ver_datosVueloLocal();

        void ver_numeroVuelo();
        void ver_horaSalida();
        string ver_horaLlegada();

        friend void modifcarPasajerosLocal(VueloLocal& pasajeroLocal,string,string,float,float);
        friend void modificarVueloLocal(VueloLocal& local,string _numeroVuelo,string _horaSalida,string _horaLlegada,string _destino);


        ~VueloLocal(){  //Destructor

        }
};
#endif // VUELOLOCAL
