#include <iostream>
#include "piso.h"
#include "BaseHabitacional.h"


bool _Habitacional::insertaEdificio(_Edificio &edi){  //Con este metodo ingresamos edificios
    Edificio.push_back(edi);
    return true;
}

float _Habitacional::totalAreaEfectiva(){   //Se calcula el total area efectiva

    list<_Edificio>::iterator edifi;
    edifi= Edificio.begin();
    float areaEfectivaTotal;

    while(edifi!= Edificio.end()){
       areaEfectivaTotal+=edifi->areaFinalEfectiva(); //Revisar porque en un lado dice otra cosa
       edifi++;
    }
    return areaEfectivaTotal;

}

float _Habitacional::calculoAreaTotalComplejoEdificios(){   //Se calcula el area total del complejo de edificios

    list<_Edificio>::iterator edifi;
    edifi= Edificio.begin();
    float totalComplejoEdificios=0.0;;
    float auxiliar;

    while(edifi!= Edificio.end()){

       auxiliar=(*edifi).get_totalAreaEdificio();
       totalComplejoEdificios+=(auxiliar);
       edifi++;
    }
    return totalComplejoEdificios;
}

float _Habitacional::costoFinalComplejoEdificios(){  //Se calcula el costo total del complejo


    list<_Edificio>::iterator edifi;
    edifi= Edificio.begin();
    int contador;
    while(edifi!= Edificio.end()){
        contador++;   //Contamos la cantidad de edificios para saber cuantos parqueos se deben ingresar
        edifi++;
    }

    float costoFinal;
    costoFinal=((calculoAreaTotalComplejoEdificios()-contador*24)*350)+(24*350*0.75*contador);  //Se le quita 24 por cuestion de parqueos
    return costoFinal;
}



