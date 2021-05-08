#include"piso.h"
#include <iostream>

_Piso::_Piso(void){     //Se crea el constructor
    areaTotal=0.0;
    areaEfectiva=0.0;
}

bool _Piso::insercion(T_apartamento &apart){
    apartamento.push_back(apart);                   //Se agregan los apartamentos
    return true;

}

int _Piso::totalApartamentos(){                    //Se cuenta el total de apartamentos por piso

    list<T_apartamento>::iterator apartamentitos;
    apartamentitos= apartamento.begin();
    int contador;

    while(apartamentitos!= apartamento.end()){
        contador++;
        apartamentitos++;
    }
    return contador;
}


void _Piso::calculoAreas(){                     //Se calcula el area efectiva y el area total
    list<T_apartamento>::iterator apartamentitos;
    apartamentitos= apartamento.begin();


    while(apartamentitos!= apartamento.end()){
        areaEfectiva+=apartamentitos->largo*apartamentitos->ancho;
        apartamentitos++;
    }
        areaTotal=(areaEfectiva)+(areaEfectiva*0.35);

}

float _Piso::get_areaEfectiva(){   //Retornamos el area efectiva
    return areaEfectiva;
}

float _Piso::get_areaTotal(){   //Retornamos el area total
    return areaTotal;
}


