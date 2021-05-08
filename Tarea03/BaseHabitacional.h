#ifndef BASEHABITACIONAL
#define BASEHABITACIONAL

#include <list>
#include <iostream>
#include "piso.h"
#include "edificio.h"

using namespace std;

class _BaseHabitacional{

    public: //Metodos de la clase BASEHABITACIONAL
        ~_BaseHabitacional(){

        }
        virtual float calculoAreaTotalComplejoEdificios()=0;
        virtual float costoFinalComplejoEdificios()=0;
        virtual bool insertaEdificio(_Edificio &edi)=0;
};



class _Habitacional: public _BaseHabitacional{
    private:  //Atributos de la clase habitaconal
        list<_Edificio> Edificio;

    protected:   //Metodos de la clase habitacional
        float totalAreaEfectiva();
        float costoConstruccion();

        float calculoAreaTotalComplejoEdificios();
        float costoFinalComplejoEdificios();

    public:
        bool insertaEdificio(_Edificio &edi);


};



#endif // BASEHABITACIONAL
