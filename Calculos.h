#pragma once
#include "Principal.h"

//Esta es la encargada sw hacer el c�lculo de eficiencia de un empleado
class Calculos :
    public Principal
{

public:
    //Aqu� creamos el m�todo
    void calcular(Principal& pPrin, int slotA);

};

