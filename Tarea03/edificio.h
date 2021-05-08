#ifndef EDIFICIO
#define EDIFICIO

#include <list>
#include <iostream>
#include "piso.h"

using namespace std;

class _Edificio{
    private: //Atributos de la clase Edificio
        float totalAreaEdificio;
        float areaEfectivaEdificio;
        list<_Piso> floor;

    public: //Metodos de la clase Edificio
        _Edificio(void);
        bool insercion(_Piso &pis); //Se insertan los pisos con esta funcion

        float areaFinalEfectiva();
        void areaTotalEdificio();
        float areaTerreno();

        float get_totalAreaEdificio();

};
#endif // EDIFICIO
