#include "Calculos.h"
#include "Principal.h"

void Calculos::calcular(Principal& pPrin, int slotA)
{

	//Enseñamos los datos
	cout << "Tiempo previsto: " << pPrin.arrayVal[slotA].tiempoPrevisto << endl;
	cout << "Tiempo transcurrido: " << pPrin.arrayVal[slotA].tiempoTranscurrido << endl;

	int calc = 0;
		
	//Hacemos la operación
	calc = pPrin.arrayVal[slotA].tiempoPrevisto / pPrin.arrayVal[slotA].tiempoTranscurrido;

	cout << "La media de tiempo empleada es ... " << calc << endl;

	//Mediamte un If controlamos si un empleado cumple con los requisitos o no
	if (calc <= 0) {

		cout << "El empleado no cumple con los requisitos" << endl;

	}
	else {

		cout << "El empleado cumple con los requisitos" << endl;

	}

}
