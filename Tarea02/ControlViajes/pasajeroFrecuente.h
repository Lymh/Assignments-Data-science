#ifndef PASAJEROFRECUENTE
#define PASAJEROFRECUENTE

#include "pasajeroNoFrecuente.h"

class pasajero_frecuente: protected pasajero_no_frecuente
{
    private: //Creamos los atributos
        string codigo;
        string nombre;
        float precioBoleto;
        float impuesto;
        float totalPagar;

    public:  //Creamos los metodos
        pasajero_frecuente(string,string,float,float);
        void set_codigo(string codigo_frecuente);
        string get_codigo_frecuente();

        void set_nombre_frecuente(string _nombre_frecuente);
        string get_nombre_frecuente();

        void set_precioBoleto(float _precioBoleto);
        float get_precioBoleto();

        void set_impuesto(float _impuesto);
        float get_impuesto();

        float get_totalPagar();

        void ver_datosVuelo();

        ~pasajero_frecuente(){

        }
};
#endif // PASAJEROFRECUENTE

