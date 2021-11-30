#include "Modificador.h"
#include <iostream>

using namespace std;

void Modificador::modificarPuesto(Principal& pPrin, int slotA) {

	//Esto es una variable volatil que se usa para poder introducir el nuevo valor y sustituir por el antiguo
	int puestoVol;


	//Vemos cual es el valor actual
	cout << "El valor actual es..." << pPrin.arrayVal[slotA].puesto << endl;

	cout << "Introduzca el nuevo valor: " << endl;
	//Introducimos y leemos el nuevo valor
	cin >> puestoVol;

	//Sustituimos el valor antiguo
	pPrin.arrayVal[slotA].puesto = puestoVol;

	cout << "Se ha modificado el dato correctamente" << endl;
	//Y lo sacamos en pantalla
	cout << "El valor actual es..." << pPrin.arrayVal[slotA].puesto << endl;

};

//Lo mismo para los demás datos que se quieran modificar

void Modificador::modificarJornada(Principal& pPrin, int slotA) {

	int jornadaVol;



	cout << "El valor actual es..." << pPrin.arrayVal[slotA].jornada << endl;

	cout << "Introduzca el nuevo valor: " << endl;

	cin >> jornadaVol;

	pPrin.arrayVal[slotA].jornada = jornadaVol;

	cout << "Se ha modificado el dato correctamente" << endl;

	cout << "El valor actual es..." << pPrin.arrayVal[slotA].jornada << endl;

};

void Modificador::modificarTrabajo(Principal& pPrin, int slotA) {

	int trabajoVol;



	cout << "El valor actual es..." << pPrin.arrayVal[slotA].trabajo << endl;

	cout << "Introduzca el nuevo valor: " << endl;

	cin >> trabajoVol;

	pPrin.arrayVal[slotA].trabajo = trabajoVol;

	cout << "Se ha modificado el dato correctamente" << endl;

	cout << "El valor actual es..." << pPrin.arrayVal[slotA].trabajo << endl;

};

void Modificador::modificarTTranscurrido(Principal& pPrin, int slotA) {

	int transcurridoVol;



	cout << "El valor actual es..." << pPrin.arrayVal[slotA].tiempoTranscurrido << endl;

	cout << "Introduzca el nuevo valor: " << endl;

	cin >> transcurridoVol;

	pPrin.arrayVal[slotA].tiempoTranscurrido = transcurridoVol;

	cout << "Se ha modificado el dato correctamente" << endl;

	cout << "El valor actual es..." << pPrin.arrayVal[slotA].tiempoTranscurrido << endl;

};

void Modificador::modificarTPrevisto(Principal& pPrin, int slotA) {

	int previstoVol;



	cout << "El valor actual es..." << pPrin.arrayVal[slotA].tiempoPrevisto << endl;

	cout << "Introduzca el nuevo valor: " << endl;

	cin >> previstoVol;

	pPrin.arrayVal[slotA].tiempoPrevisto = previstoVol;

	cout << "Se ha modificado el dato correctamente" << endl;

	cout << "El valor actual es..." << pPrin.arrayVal[slotA].tiempoPrevisto << endl;

};