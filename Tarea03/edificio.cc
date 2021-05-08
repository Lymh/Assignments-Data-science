 #include "edificio.h"
  #include "piso.h"
#include <iostream>
_Edificio::_Edificio(){
        totalAreaEdificio=0.0;
        areaEfectivaEdificio=0.0;
}


//Se insertan los pisos con esta funcion
bool _Edificio::insercion(_Piso &pis){
    floor.push_back(pis);
    return true;
}

float _Edificio::areaFinalEfectiva(){
    list<_Piso>::iterator pisitos;
    pisitos= floor.begin();                     //Se menciona en el enunciado que el area efectica es la suma del area total de los pisos


    while(pisitos!= floor.end()){
       areaEfectivaEdificio+=pisitos->get_areaTotal();
       pisitos++;
    }
    return areaEfectivaEdificio;
}

void _Edificio::areaTotalEdificio(){                   //Se suma 24 metros cuadrados ya que cada edificio necesita un parqueo
    totalAreaEdificio=areaEfectivaEdificio+24;
}


float _Edificio::areaTerreno(){                        //Se calcula el area del terrreno del edificio solo se necesita el area total del primer piso
    list<_Piso>::iterator pisitos;
    pisitos= floor.begin();
    return pisitos->get_areaTotal();
}

float _Edificio::get_totalAreaEdificio(){               //Se retorna area total por cada edificio
    return totalAreaEdificio;
}
