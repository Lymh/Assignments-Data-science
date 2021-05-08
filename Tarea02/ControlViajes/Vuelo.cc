#include <iostream>

#include "vuelo.h"
#include "vueloLocal.h"
#include "VueloInternacional.h"
#include "pasajeroFrecuente.h"
#include "pasajeroNoFrecuente.h"
#include "vueloCarga.h"

//Clase Vuelo

Vuelo::Vuelo(string _numeroVuelo,string _horaSalida,string _horaLlegada){
    numeroVuelo=_numeroVuelo;
    horaSalida=_horaSalida;
    horaLlegada=_horaLlegada;
}
void Vuelo::set_numeroVuelo(string _numeroVuelo){
     numeroVuelo=_numeroVuelo;
}

void Vuelo::set_horaSalida(string _horaSalida){
     horaSalida=_horaSalida;
}

void Vuelo::set_horaLlegada(string _horaLlegada){
     horaLlegada=_horaLlegada;
}

string Vuelo::get_numeroVuelo(){
     return numeroVuelo;
}

string Vuelo::get_horaSalida(){
     return horaSalida;
}

string Vuelo::get_horaLlegada(){
     return horaLlegada;
}//_________________________________________________


//Clase Vuelo Local
VueloLocal::VueloLocal(string _numeroVuelo,string _horaSalida,string _horaLlegada,int _numeroMinimoPasajeros,string _categoria,string _codigo,string _nombre,float _precioBoleto,float _impuesto):Vuelo(_numeroVuelo,_horaSalida,_horaLlegada),pasajero_frecuente(_codigo,_nombre,_precioBoleto,_impuesto){
    numeroMinimoPasajeros=_numeroMinimoPasajeros;
    categoria=_categoria;
}

void VueloLocal::set_numeroMinimoPasajeros(int _numeroMinimoPasajeros){
    numeroMinimoPasajeros=_numeroMinimoPasajeros;
}

void VueloLocal::set_categoria(string _categoria){
    categoria=_categoria;

}
int VueloLocal::get_numeroMinimoPasajeros(){
    return numeroMinimoPasajeros;
}

string VueloLocal::get_categoria(){
    return categoria;
}

void VueloLocal::ver_datosVueloLocal(){

    cout<<"Vuelo Local"
    <<"\nNumero de vuelo:"<<get_numeroVuelo()
    <<"\nHora de salida:"<<get_horaSalida()
    <<"\nHola de llegada:"<<get_horaLlegada()
    <<"\nNumero de pasajeros:"<<get_numeroMinimoPasajeros()
    <<"\nCategoria:"<<get_categoria()
    <<"\nNombre:"<<get_nombre_frecuente()
    <<"\nCodigo:"<<get_codigo_frecuente()
    <<"\nPrecio del boleto:"<<get_precioBoleto()
    <<"\nImpuesto:"<<get_impuesto()*100<<"%"
    <<"\nTotal a pagar pasajero frecuente:"<<get_totalPagar()
    <<"\nTotal a pagar pasajero no frecuente:"<<get_totalPagar_noFrecuente()
    <<"\n"<<endl;

}

void VueloLocal::ver_numeroVuelo(){
    get_numeroVuelo();
}
void VueloLocal::ver_horaSalida(){
    get_horaSalida();
}
string VueloLocal::ver_horaLlegada(){
   return get_horaLlegada();
}//_________________________________________________



//Clase Vuelo Internacional
VueloInternacional::VueloInternacional(string _numeroVuelo,string _horaSalida,string _holaLlegada,string _destino,string _codigo,string _nombre,float _precioBoleto,float _impuesto):Vuelo(_numeroVuelo,_horaSalida,_holaLlegada),pasajero_frecuente(_codigo,_nombre,_precioBoleto,_impuesto){
    destino=_destino;
}
void VueloInternacional::set_destino(string _destino){
    destino=_destino;
}

string VueloInternacional::get_destino(){
    return destino;
}
void VueloInternacional::ver_datosVueloInternacional(){

    cout<<"Vuelo Internacional"
    <<"\nNumero de vuelo:"<<get_numeroVuelo()
    <<"\nHora de salida:"<<get_horaSalida()
    <<"\nHola de llegada:"<<get_horaLlegada()
    <<"\nDestino:"<<get_destino()
    <<"\nNombre:"<<get_nombre_frecuente()
    <<"\nCodigo:"<<get_codigo_frecuente()
    <<"\nPrecio del boleto:"<<get_precioBoleto()
    <<"\nImpuesto:"<<get_impuesto()*100<<"%"
    <<"\nTotal a pagar cliente no frecuente:"<<get_totalPagar_noFrecuente()
    <<"\nTotal a pagar cliente frecuente:"<<get_totalPagar()
    <<"\n"<<endl;

}

void VueloInternacional::ver_numeroVuelo(){
    get_numeroVuelo();
}
void VueloInternacional::ver_horaSalida(){
    get_horaSalida();
}
string VueloInternacional::ver_horaLlegada(){
   return get_horaLlegada();
}//_________________________________________________


//Clase Vuelo Carga

VueloCarga::VueloCarga(string _numeroVuelo,string _horaSalida,string _horaLlegada,float _cargaMaxima,string _clienteDestino):Vuelo(_numeroVuelo,_horaSalida,_horaLlegada){
    cargaMaxima=_cargaMaxima;
    clienteDestino=_clienteDestino;
}
void VueloCarga::set_cargaMaxima(float _cargaMaxima){
    cargaMaxima=_cargaMaxima;

}
void VueloCarga::set_clienteDestino(string _clienteDestino){
    clienteDestino=_clienteDestino;
}

float VueloCarga::get_cargaMaxima(){
    return cargaMaxima;
}
string VueloCarga::get_clienteDestino(){
    return clienteDestino;
}

void VueloCarga::ver_vueloCarga(){
    cout<<"Vuelo Carga"
    <<"\nNumero de vuelo:"<<get_numeroVuelo()
    <<"\nHora de salida:"<<get_horaSalida()
    <<"\nHola de llegada:"<<get_horaLlegada()
    <<"\nCarga maxima:"<<get_cargaMaxima()<<"kg"
    <<"\nCliente destino:"<<get_clienteDestino()
    <<"\n"<<endl;

}
//___________________________________


//Clase pasajero frecuente
pasajero_frecuente::pasajero_frecuente(string _codigo,string _nombre,float _precioBoleto,float _impuesto):pasajero_no_frecuente(_codigo,_nombre,_precioBoleto,_impuesto){
    nombre=_nombre;
    codigo=_codigo;
    precioBoleto=_precioBoleto;
    impuesto=_impuesto;
}

void pasajero_frecuente::set_codigo(string codigo_frecuente){
    codigo=codigo_frecuente;
}

string pasajero_frecuente::get_codigo_frecuente(){
    return codigo;
}

void pasajero_frecuente::set_nombre_frecuente(string _nombre_frecuente){
    nombre=_nombre_frecuente;
}

string pasajero_frecuente::get_nombre_frecuente(){
    return nombre;
}

float pasajero_frecuente::get_totalPagar(){
    totalPagar=precioBoleto+(impuesto*precioBoleto);
    return totalPagar-(totalPagar*0.20);
}

void pasajero_frecuente::set_precioBoleto(float _precioBoleto){
    precioBoleto=_precioBoleto;
}

float pasajero_frecuente::get_precioBoleto(){
    return precioBoleto;
}

void pasajero_frecuente::set_impuesto(float _impuesto){
    impuesto=_impuesto;
}

float pasajero_frecuente::get_impuesto(){
    return impuesto;
}//_________________________________________________




//Clase pasajero no frecuente

pasajero_no_frecuente::pasajero_no_frecuente(string _codigo,string _nombre,float _precioBoleto,float _impuesto){
    nombre=_nombre;
    codigo=_codigo;
    precioBoleto=_precioBoleto;
    impuesto=_impuesto;
}


float pasajero_no_frecuente::get_totalPagar_noFrecuente(){
    totalPagar=precioBoleto+(impuesto*precioBoleto);
    return totalPagar;
}


void pasajero_no_frecuente::set_codigo(string _codigo_noFrecuente){
    codigo=_codigo_noFrecuente;

}

string pasajero_no_frecuente::get_codigo_noFrecuente(){
    return codigo;

}

void pasajero_no_frecuente::set_nombre_noFrecuente(string _nombre_noFrecuente){
    nombre=_nombre_noFrecuente;

}
string pasajero_no_frecuente::get_nombre_noFrecuente(){
    return nombre;

}


float pasajero_no_frecuente::get_precioBoleto(){
    return precioBoleto;

}
float pasajero_no_frecuente::get_impuesto(){
    return impuesto;

}

void pasajero_no_frecuente::set_precioBoletNo(float _precioBoleto){
    precioBoleto=_precioBoleto;
}


