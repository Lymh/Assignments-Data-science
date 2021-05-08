#ifndef PASAJERONOFRECUENTE
#define PASAJERONOFRECUENTE
#include "vuelo.h"
#include "pasajeroFrecuente.h"
class pasajero_no_frecuente
{

    private: //Creamos los atributos
        string codigo;
        string nombre;
        float precioBoleto;
        float impuesto;
        float totalPagar;

    public:  //Creamos los metodos
        pasajero_no_frecuente(string,string,float,float);
        void set_codigo(string _codigo_noFrecuente);
        string get_codigo_noFrecuente();

        void set_nombre_noFrecuente(string _nombre_noFrecuente);
        string get_nombre_noFrecuente();
        void set_precioBoletNo(float _precioBoleto);

        float get_precioBoleto();
        float get_impuesto();
        float get_totalPagar_noFrecuente();

        void ver_datosVueloNoFrecuente();

        ~pasajero_no_frecuente(){

        }

};
#endif // PASAJERONOFRECUENTE

