#include "Introducir.h"


using namespace std;


void Introducir::introSt(Principal& pPrin, int slotA) {
	//Declaramos las variables
	string nombre;
	string apellido;
	string puesto;
	string trabajo;

	//Aquí pedimos los datos y los guardamos en el array
	cout << "Ponga el nombre del empleado: " << endl;
	cin >> nombre;
	pPrin.arrayVal[slotA].nombre = nombre;

	cout << "Ponga el apellido del empleado: " << endl;
	cin >> apellido;
	pPrin.arrayVal[slotA].apellido = apellido;

	cout << "Ponga el puesto del empleado: " << endl;
	cin >> puesto;
	pPrin.arrayVal[slotA].puesto = puesto;

	cout << "Ponga el trabajo del empleado: " << endl;
	cin >> trabajo;
	pPrin.arrayVal[slotA].trabajo = trabajo;

};


void Introducir::introNum(Principal& pPrin, int slotA) {
	//Declaramos las variables
	int edad;
	int jornada;
	int tiempoPrevisto;
	int tiempoTranscurrido;


	//Aquí pedimos los datos y los guardamos en el array
	cout << "Ponga la edad del empleado: " << endl;
	cin >> edad;
	pPrin.arrayVal[slotA].edad = edad;

	cout << "Ponga la jornada del empleado: " << endl;
	cin >> jornada;
	pPrin.arrayVal[slotA].jornada = jornada;

	cout << "Ponga el tiempo previsto para el trabajo: " << endl;
	cin >> tiempoPrevisto;
	pPrin.arrayVal[slotA].tiempoPrevisto = tiempoPrevisto;

	cout << "Ponga el tiempo transcurrido del trabajo: " << endl;
	cin >> tiempoTranscurrido;
	pPrin.arrayVal[slotA].tiempoTranscurrido = tiempoTranscurrido;

};
