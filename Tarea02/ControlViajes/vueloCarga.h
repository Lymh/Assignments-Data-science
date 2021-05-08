#ifndef VUELOCARGA
#define VUELOCARGA
#include "vuelo.h"
class VueloCarga : protected Vuelo
{

    private:   //se crean los atributos
        float cargaMaxima;
        string clienteDestino;

    public:     //se crean los metodos
        VueloCarga(string,string,string,float,string);

        void set_cargaMaxima(float _cargaMaxima);
        void set_clienteDestino(string _clienteDestino);

        float get_cargaMaxima();
        string get_clienteDestino();

        void ver_vueloCarga();
        friend void modificarVueloCarga(VueloCarga& Carga,string _numeroVuelo,string _horaSalida,string _horaLlegada,float cargaMaxima,string clienteDestino);

        ~VueloCarga(){


        }

};
#endif // VUELOCARGA


