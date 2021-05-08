#ifndef PISO
#define PISO

#include <list>
#include <iostream>
using namespace std;

typedef struct apar{ //Se crea la estructura piso
    float largo;
    float ancho;
}T_apartamento;

class _Piso{
    private: //Atributos de la clase Piso
        float areaTotal;
        float areaEfectiva;
        list<T_apartamento> apartamento;

    public: //Metodos de la clase piso

        _Piso(void);
        bool insercion(T_apartamento &apart); //Se insertan los apartamentos con esta funcion
        int totalApartamentos();            //Se calculo el total de apartamentos
        void calculoAreas();                //Se calcula el area total y efectica con este metodo


        float get_areaEfectiva();       //Retornamos area efectiva
        float get_areaTotal();          //Retornamos area total

};
#endif // PISO
