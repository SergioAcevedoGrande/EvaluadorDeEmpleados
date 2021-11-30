

#include <iostream>
#include "Principal.h"
#include "Introducir.h"
#include "Modificador.h"
#include "Calculos.h"


using namespace std;

Principal princip;
Modificador modifi;
Modificador ora;
Calculos calculos;
Introducir introducir;

//Declaramos la variables globales
int bcl = 1;
int slotA;

//Aquí declaramos el método encargado de pedir un slot del array que queremos modificar
int accesoArr() {

    cout << "Que empleado quieres visualizar?" << endl;
    cin >> slotA;
    return slotA;

}

//Todo el programa entra dentro del método retorno para poner seguir dentro del programa hasta que no se diga lo contrario
void retorno() {

    //Declaramos la variables 
    int x;
    int res;
    bool bol = true;
    int sta;


    //Preguntamos primero si se quiere entrar al programa
    cout << "Quieres entrar en el programa? 1 = si 0 = no" << endl;
    cin >> sta;


    //mediante un if controlamos la respuesta de la pregunta anterior
    if (sta == 1)
    {

        //El do while lo usamos para que hasta que el booleano no sea false sigamos dentro del menú
        do
        {

            //Llamamos al método para saber qué empleado vamos a modificar
            accesoArr();

            //Aquí en caso de que no haya datos crearíamos uno nuevo, por defecto está vacío
            cout << "Quiere crear un nuevo empleado? 1 = si 0 = no" << endl;
            cin >> res;

            if (res == 1)
            {
                //En caso de que decidamos crear un empleado aquí llamamos a los métodos introducir para meter los datos del nuevo empleado
                introducir.introSt(princip, slotA);
                introducir.introNum(princip, slotA);
                //Una vez introducidos los datos tendremos que volver a seleccionar el empleado y darle a que no queremos crear el nuevo empleado para que pase al menu
            }
            else if (res == 0) {

                
                cout << "Selecciona la opcion: " << endl;
                cout << "1. Modificar datos de un trabajador" << endl;
                cout << "2. Calcular la eficiencia de un empleado" << endl;
                cout << "3. Mostrar los datos del empleado" << endl;
                cout << "4. Cambiar de empleado" << endl;
                cout << "5. Cerrar programa" << endl;
                cout << "" << endl;

                cin >> x;
                //Usamos el switch para crear un menú con las diferentes opciones del programa
                switch (x) {

                case 1:
                    //En este primero caso entraríamos en un siwtch secundario para poder seleccionar la opcion que queramos modificar
                    int op;

                    cout << "Qué opcion quieres:" << endl;
                    cout << "1 Modificar Jornada" << endl;
                    cout << "2 Modificar Tiempo Transcurrido" << endl;
                    cout << "3 Modificar Tiempo Previsto" << endl;
                    cout << "4 Modificar Puesto" << endl;
                    cout << "5 Modificar Trabajo" << endl;
                    cout << "" << endl;

                    cin >> op;

                    switch (op)
                    {
                        //En cada uno de los casos llama a los correspondientes métodos de la clase modificar
                    case 1:

                        cout << "Ponga el nuevo valor que quiera: " << endl;

                        modifi.modificarJornada(princip, slotA);


                        break;

                    case 2:

                        cout << "Ponga el nuevo valor que quiera: " << endl;

                        modifi.modificarTTranscurrido(princip, slotA);


                        break;

                    case 3:

                        cout << "Ponga el nuevo valor que quiera: " << endl;

                        modifi.modificarTPrevisto(princip, slotA);


                        break;

                    case 4:

                        cout << "Ponga el nuevo valor que quiera: " << endl;

                        modifi.modificarPuesto(princip, slotA);


                        break;

                    case 5:

                        cout << "Ponga el nuevo valor que quiera: " << endl;

                        modifi.modificarTrabajo(princip, slotA);


                        break;

                    default:
                        break;
                    }

                    break;

                case 2:
                    //En este case se encarga de llamar al método de la clase Calculos
                    calculos.calcular(princip, slotA);

                    break;

                case 3:
                    //En este case se encarga de llamar al método de la clase Principal
                    princip.mostrar(slotA);


                    break;


                case 4:
                    //En este case se encarga de llamar al método de esta misma clase
                    accesoArr();

                    break;


                case 5:
                    //Si se selecciona esta opción el switch terminaría
                    bol = false;

                    break;
                }



            }

        } while (bol);

    }
    else if (sta == 0)
    {
        
        //Esta parte es para evitar errores de haberte dado a la opción 5 sin querer
        
        cout << "Estás seguro de que quieres salir? 1 = si 0 = no" << endl;
        cin >> sta;

        bcl = 0;

        cout << "Cerrando programa..." << endl;
        system("Pause");


    }
}
void main()
{
    //Aqui está el método main que llama al método retorno
    do
    {

        retorno();

    } while (bcl == 1);
    

}

