#include <iostream>
#include"piso.h"
#include"edificio.h"
#include <iostream>
#include"BaseHabitacional.h"
using namespace std;

int main()
{
      //Primer edificio
    T_apartamento apartamento1;
    apartamento1.ancho=15;
    apartamento1.largo=20;

    _Piso* piso1Edificio1 = new _Piso();
    _Piso* piso2Edificio1 = new _Piso();
    _Piso* piso3Edificio1 = new _Piso();
    _Piso* piso4Edificio1 = new _Piso();

    for(int i=0; i<12;i++){
        piso1Edificio1->insercion(apartamento1);
        piso2Edificio1->insercion(apartamento1);
    }

    for(int i=0; i<13;i++){
        piso3Edificio1->insercion(apartamento1);
        piso4Edificio1->insercion(apartamento1);
    }

    piso1Edificio1->calculoAreas();
    piso2Edificio1->calculoAreas();
    piso3Edificio1->calculoAreas();
    piso4Edificio1->calculoAreas();

    //______________________________________-

    //Edificio2

    T_apartamento apartamento2;
    T_apartamento apartamento2Piso2;

    apartamento2.ancho=15;
    apartamento2.largo=12;

    apartamento2Piso2.ancho=15;
    apartamento2Piso2.largo=10;

    _Piso* piso1Edificio2 = new _Piso();
    _Piso* piso2Edificio2 = new _Piso();
    _Piso* piso3Edificio2 = new _Piso();
    _Piso* piso4Edificio2 = new _Piso();

    for(int i=0; i<10;i++){
        piso1Edificio2->insercion(apartamento2);
        piso4Edificio2->insercion(apartamento2);
    }

    for(int i=0; i<12;i++){
        piso2Edificio2->insercion(apartamento2Piso2);
    }

    for(int i=0; i<12;i++){
        piso3Edificio2->insercion(apartamento2Piso2);
    }

    piso1Edificio2->calculoAreas();
    piso2Edificio2->calculoAreas();
    piso3Edificio2->calculoAreas();
    piso4Edificio2->calculoAreas();

    //____________________________________

    //Edificio 3

    T_apartamento apartamento3Piso1;
    apartamento3Piso1.ancho=15;
    apartamento3Piso1.largo=20;

    _Piso* piso1Edificio3 = new _Piso();
    _Piso* piso2Edificio3 = new _Piso();
    _Piso* piso3Edificio3 = new _Piso();

    for(int i=0; i<12;i++){
        piso1Edificio3->insercion(apartamento3Piso1);
        piso2Edificio3->insercion(apartamento3Piso1);
    }

    for(int i=0; i<13;i++){
        piso3Edificio3->insercion(apartamento3Piso1);
    }

    piso1Edificio3->calculoAreas();
    piso2Edificio3->calculoAreas();
    piso3Edificio3->calculoAreas();


    //Ingresamos los edificios

    _Edificio* edificio1= new _Edificio();
    edificio1->insercion(*piso1Edificio1);
    edificio1->insercion(*piso2Edificio1);
    edificio1->insercion(*piso3Edificio1);
    edificio1->insercion(*piso4Edificio1);

    //__________________________

    _Edificio* edificio2= new _Edificio();

    edificio2->insercion(*piso1Edificio2);
    edificio2->insercion(*piso2Edificio2);
    edificio2->insercion(*piso3Edificio2);
    edificio2->insercion(*piso4Edificio2);

    //__________________________
    _Edificio* edificio3= new _Edificio();

    edificio3->insercion(*piso1Edificio3);
    edificio3->insercion(*piso2Edificio3);
    edificio3->insercion(*piso3Edificio3);

    cout<<"Edificio 1"<<endl;
    cout<<"Area efectica:"<< edificio1->areaFinalEfectiva()<<endl;
    edificio1->areaTotalEdificio();
    cout<<"Area total:"<< edificio1->get_totalAreaEdificio()<<endl;
    cout<<"Area terreno:"<< edificio1->areaTerreno()<<endl;

    cout<<"\nEdificio 2"<<endl;
    cout<<"Area efectica:"<< edificio2->areaFinalEfectiva()<<endl;
    edificio2->areaTotalEdificio();
    cout<<"Area total:"<< edificio2->get_totalAreaEdificio()<<endl;
    cout<<"Area terreno:"<< edificio2->areaTerreno()<<endl;

    cout<<"\nEdificio 3"<<endl;
    cout<<"Area efectica:"<< edificio3->areaFinalEfectiva()<<endl;
    edificio3->areaTotalEdificio();
    cout<<"Area total:"<< edificio3->get_totalAreaEdificio()<<endl;
    cout<<"Area terreno:"<< edificio3->areaTerreno()<<endl;

    //Construimos el complejo habitacional

    _BaseHabitacional* ComplejoHabitacionl;
    ComplejoHabitacionl= new _Habitacional();
    ComplejoHabitacionl->insertaEdificio(*edificio1);
    ComplejoHabitacionl->insertaEdificio(*edificio2);
    ComplejoHabitacionl->insertaEdificio(*edificio3);


    cout<<"\nArea total complejo edificios:"<<ComplejoHabitacionl->calculoAreaTotalComplejoEdificios()<<"m2"<<endl;
    cout<<"Costo habitacional final:"<<ComplejoHabitacionl->costoFinalComplejoEdificios()<<" $"<<endl;



    return 0;
}
