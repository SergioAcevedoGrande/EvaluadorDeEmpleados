#pragma once
#include <iostream> 


using namespace std;

//Esta es la clase padre del programa
class Principal
{
  

public:

    //Aqu� declaramos y creamos un array para poder guardar los diferentes datos de un empleado
    struct val
    {
        string nombre;
        string apellido;
        int edad;
        string puesto;
        int jornada;
        string trabajo;
        int tiempoPrevisto;
        int tiempoTranscurrido;

    };

    //Ser� un array de 5 espacios no demasiado grande
    struct val arrayVal[5];

    int sizeofArrayinProgram = sizeof(arrayVal) / sizeof(arrayVal[0]);

    //Aqu� creamos el m�todo mostrar
   void mostrar(int slotA);
    

};

