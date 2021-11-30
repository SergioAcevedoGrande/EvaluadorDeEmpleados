#pragma once
#include "Principal.h"

//En esta clase crearemos los métodos para modificar los datos de un empleado
class Modificador :
    public Principal
{
public:

    //Creamos los diferentes métodos mirando el dato que se quiera modificar
    void modificarJornada(Principal& pPrin, int slotA);

    void modificarTTranscurrido(Principal& pPrin, int slotA);

    void modificarTPrevisto(Principal& pPrin, int slotA);

    void modificarPuesto(Principal& pPrin, int slotA);

    void modificarTrabajo(Principal& pPrin, int slotA);
};

