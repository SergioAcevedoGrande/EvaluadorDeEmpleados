#include "Principal.h"
#include <iostream>


using namespace std;

//Este es el contenido del método mostrar
void Principal::mostrar(int slotA) {
    
        cout << "Nombre: " << arrayVal[slotA].nombre
            << endl << "Apellido: " << arrayVal[slotA].apellido
            << endl << "Edad: " << arrayVal[slotA].edad
            << endl << "Puesto: " << arrayVal[slotA].puesto
            << endl << "Jornada: " << arrayVal[slotA].jornada
            << endl << "Trabajo: " << arrayVal[slotA].trabajo
            << endl << "Tiempo Previsto: " << arrayVal[slotA].tiempoPrevisto
            << endl << "Tiempo Transcurrido: " << arrayVal[slotA].tiempoTranscurrido
            << endl;
  
}


