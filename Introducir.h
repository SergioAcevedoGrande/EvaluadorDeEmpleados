#pragma once
#include "Principal.h"

//Esta es la clase donde se crean los m�todos para introducir los datos del empleado
class Introducir :
    public Principal
{
public:
    //Aqu� creamos los 2 m�todos tanto para introducir String como Enteros
    void introSt(Principal& pPrin, int slotA);

    void introNum(Principal& pPrin, int slotA);

};

