#pragma once
#include "Principal.h"

//Esta es la encargada sw hacer el cálculo de eficiencia de un empleado
class Calculos :
    public Principal
{

public:
    //Aquí creamos el método
    void calcular(Principal& pPrin, int slotA);

};

