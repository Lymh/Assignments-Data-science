#include <iostream>
#include "vuelo.h"
#include "vueloLocal.h"
#include "VueloInternacional.h"
#include "pasajeroFrecuente.h"
#include "pasajeroNoFrecuente.h"
#include "vueloCarga.h"

using namespace std;

void modificarVueloInternacional(VueloInternacional& internacional,string _numeroVuelo,string _horaSalida,string _horaLlegada,string _destino){
    internacional.set_numeroVuelo(_numeroVuelo);
    internacional.set_horaSalida(_horaSalida);
    internacional.set_horaLlegada(_horaLlegada);
    internacional.destino=_destino;
}

void modifcarPasajerosInternacional(VueloInternacional& pasajero,string _codigo,string _nombre,float _precioBoleto,float _impuesto){
    pasajero.set_nombre_frecuente(_nombre);
    pasajero.set_codigo(_codigo);
    pasajero.set_precioBoleto(_precioBoleto);
    pasajero.set_precioBoletNo(_precioBoleto);
    pasajero.set_impuesto(_impuesto);
}

void modifcarPasajerosLocal(VueloLocal& pasajeroLocal,string _codigo,string _nombre,float _precioBoleto,float _impuesto){
    pasajeroLocal.set_nombre_frecuente(_nombre);
    pasajeroLocal.set_codigo(_codigo);
    pasajeroLocal.set_precioBoleto(_precioBoleto);
    pasajeroLocal.set_impuesto(_impuesto);


}
void modificarVueloLocal(VueloLocal& local,string _numeroVuelo,string _horaSalida,string _horaLlegada,string _categoria){
    local.set_numeroVuelo(_numeroVuelo);
    local.set_horaSalida(_horaSalida);
    local.set_horaLlegada(_horaLlegada);
    local.categoria=_categoria;

}

void modificarVueloCarga(VueloCarga& Carga,string _numeroVuelo,string _horaSalida,string _horaLlegada,float _cargaMaxima,string _clienteDestino){
    Carga.set_numeroVuelo(_numeroVuelo);
    Carga.set_horaSalida(_horaSalida);
    Carga.set_horaLlegada(_horaLlegada);
    Carga.set_cargaMaxima(_cargaMaxima);
    Carga.set_clienteDestino(_clienteDestino);

}

int main()
{
    string nombreX;
    string numeroVueloX;
    string holaSalidaX;
    string holaLlegadaX;
    string categoriaX;
    string destinoX;
    int opcion;
    string codigoX;
    float precioBoletoX;
    float impuestoX;
    int numeroPasajerosX;
    float cargaMaximaX;
    string clienteDestinoX;

    VueloInternacional* internacional[10];  //Se instancia la clase
    internacional[0]= new VueloInternacional("2050x","10:00 am","5:00 pm","Francia","50BCS","Eva",10000,0.10);
    internacional[1]= new VueloInternacional("3000x","13:00 am","5:30 pm","Andorra","60BCS","Andy",50000,0.05);

    internacional[0]->ver_datosVueloInternacional();
    cout<<"\n"<<endl;
    internacional[1]->ver_datosVueloInternacional();

    VueloLocal* local[10];
    local[0]= new VueloLocal("2050x","7:00 am","5:00 pm",20,"Domestica","506SD","Yirlany",30000,0.10);
    local[1]= new VueloLocal("2050x","8:00 am","5:00 pm",15,"Domestica","40AD","Freddy",50000,0.07);
    cout<<"\n"<<endl;
    VueloCarga* Carga[10];
    Carga[0]= new VueloCarga("5050x","7:00 am","4:00 pm",20.5,"Aduanas");
    Carga[1]= new VueloCarga("7050x","2:00 am","7:00 pm",25.5,"Panama");

    local[0]->ver_datosVueloLocal();
    local[1]->ver_datosVueloLocal();
    cout<<"\n"<<endl;
    Carga[0]->ver_vueloCarga();
    Carga[1]->ver_vueloCarga();


    while(opcion!=4){

            cout<<"Que desea modificar digite un numero:\n1.Modificar Vuelo internacional \n2.Modifical Vuelo Local \n3.Vuelo carga \n4.Salir"<<endl;
            cin>>opcion;

            switch(opcion){
                case 1:
                            cout<<"Digite un nombre:"<<endl;
                            cin>>nombreX;
                            cout<<"Digite un codigo:"<<endl;
                            cin>>codigoX;
                            cout<<"Digite precio boleto:"<<endl;
                            cin>>precioBoletoX;
                            cout<<"Digite impuesto:"<<endl;
                            cin>>impuestoX;
                            cout<<"Digite Numero de vuelo:"<<endl;
                            cin>>numeroVueloX;
                            cout<<"Digite Hora de salida:"<<endl;
                            cin>>holaSalidaX;
                            cout<<"Digite Hora de llegada:"<<endl;
                            cin>>holaLlegadaX;
                            cout<<"Ingrese destino:"<<endl;
                            cin>>destinoX;

                            modificarVueloInternacional(*internacional[0],numeroVueloX,holaSalidaX,holaLlegadaX,destinoX);
                            modifcarPasajerosInternacional(*internacional[0],codigoX,nombreX,precioBoletoX,impuestoX);
                            internacional[0]->ver_datosVueloInternacional();



                break;

                case 2:

                            cout<<"Digite un nombre:"<<endl;
                            cin>>nombreX;
                            cout<<"Digite un codigo:"<<endl;
                            cin>>codigoX;
                            cout<<"Digite precio boleto:"<<endl;
                            cin>>precioBoletoX;
                            cout<<"Digite impuesto:"<<endl;
                            cin>>impuestoX;
                            cout<<"Digite Numero de vuelo:"<<endl;
                            cin>>numeroVueloX;
                            cout<<"Digite Hora de salida:"<<endl;
                            cin>>holaSalidaX;
                            cout<<"Digite Hora de llegada:"<<endl;
                            cin>>holaLlegadaX;
                            cout<<"Ingrese categoria:"<<endl;
                            cin>>categoriaX;
                            cout<<"Ingrese numero de pasajeros:"<<endl;
                            cin>>numeroPasajerosX;

                            modificarVueloLocal(*local[0],numeroVueloX,holaSalidaX,holaLlegadaX,categoriaX);
                            modifcarPasajerosLocal(*local[0],codigoX,nombreX,precioBoletoX,impuestoX);
                            local[0]->ver_datosVueloLocal();

                break;

                case 3:

                            cout<<"Digite Numero de vuelo:"<<endl;
                            cin>>numeroVueloX;
                            cout<<"Digite Hora de salida:"<<endl;
                            cin>>holaSalidaX;
                            cout<<"Digite Hora de llegada:"<<endl;
                            cin>>holaLlegadaX;
                            cout<<"Digite Carga maxima:"<<endl;
                            cin>>cargaMaximaX;
                            cout<<"Digite cliente destino:"<<endl;
                            cin>>clienteDestinoX;
                            modificarVueloCarga(*Carga[0],numeroVueloX,holaSalidaX,holaLlegadaX,cargaMaximaX,clienteDestinoX);
                            Carga[0]->ver_vueloCarga();
                break;
            }

    }



    return 0;
}
