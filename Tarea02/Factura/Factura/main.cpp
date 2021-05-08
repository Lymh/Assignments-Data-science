#include <iostream>
#include <stdio.h>

using namespace std;

class _factura{
    private: //Atributos de la clase
        string nombreCliente;
        string direccionCliente;
        float montoTotal, porcentajeImpuesto, total;

    public: //Metodos de la clase

        _factura(string _nombreCliente,string _direccionCliente, float _montoTotal, float _porcentajeImpuesto){ //Constructor
            nombreCliente=_nombreCliente;
            direccionCliente=_direccionCliente;
            montoTotal=_montoTotal;
            porcentajeImpuesto=_porcentajeImpuesto;
        }

        //Metodos para modificar atributos

        void set_nombre(string _nombreCliente){
            nombreCliente=_nombreCliente;
        }

        void set_direccion(string _direccionCliente){
            direccionCliente=_direccionCliente;
        }

        void set_montoT(float _montoTotal){
            montoTotal=_montoTotal;
        }

        void set_impuesto(float _porcentajeImpuesto){
            porcentajeImpuesto=_porcentajeImpuesto;
        }

        //Metodos para obtener atributos

        string get_nombre(string _nombreCliente){
            return nombreCliente;
        }

        string get_direccion(string _direccionCliente){
            return direccionCliente;
        }

        float get_montoT(float _montoTotal){
            return montoTotal;
        }

        float get_impuesto(float _porcentajeImpuesto){
            return porcentajeImpuesto;
        }

        float pagar(){
            total=montoTotal+((porcentajeImpuesto/100)*montoTotal);
            return total;
        }

        void getFactura(){
            cout <<"\nFactura Electronica\n"
                <<"Nombre:"<<nombreCliente
                <<"\nDireccion:"<<direccionCliente
                <<"\nMonto total:"<<montoTotal
                <<"\nPorcentaje:"<<porcentajeImpuesto<<"%"
                <<"\nTotal a pagar:"<<pagar()<<endl;
        }

        //Metodo destructor
        ~_factura(void){

        }


};



int main()
{
    string nombreCli;
    string direccionCli;
    float montoT, porcentajeImp;

    cout<<"Introduzca el nombre del cliente:";
    cin>>nombreCli;
    cout<<"Introduzca la direccion del cliente:";
    cin>>direccionCli;
    cout<<"Digite el monto total:";
    cin>>montoT;
    cout<<"Porcentaje de impuesto:";
    cin>>porcentajeImp;

    _factura* factura_comercial;
    factura_comercial= new _factura(nombreCli,direccionCli,montoT,porcentajeImp);
    factura_comercial->getFactura();

    factura_comercial->set_nombre("Esther");
    factura_comercial->set_direccion("Roble");
    factura_comercial->set_montoT(65250);
    factura_comercial->getFactura();
    return 0;
}
