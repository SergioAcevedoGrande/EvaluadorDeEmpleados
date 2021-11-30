#pragma once
#include "Principal.h"

//Esta es la clase donde se crean los métodos para introducir los datos del empleado
class Introducir :
    public Principal
{
public:
    //Aquí creamos los 2 métodos tanto para introducir String como Enteros
    void introSt(Principal& pPrin, int slotA);

    void introNum(Principal& pPrin, int slotA);

};

