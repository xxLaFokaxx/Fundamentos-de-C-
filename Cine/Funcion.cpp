#include <iostream>
#include <string>
using namespace std;
int main() {
    // Declaración de variables
    int opcion, horario, num_personas;
    float costo_entrada;
    string pelicula;
    system("cls");
    // Menú de opciones
    cout << "Seleccione la funcion y sala:" << endl;
    cout << "1) Funciones 10 y 17 hrs" << endl;
    cout << "2) Funciones 19 y 23 hrs" << endl;
    cout << "3) Funciones 14 y 18 hrs" << endl;
    cout << "4) Funciones 09 y 13 hrs" << endl;
    cin >> opcion;
    // Selección del horario
    switch (opcion) {
        case 1:
            cout << "Seleccione el horario:" << endl;
            cout << "1) 10 hrs" << endl;
            cout << "2) 17 hrs" << endl; cin >> horario;
            if (horario == 1) {
                pelicula = "Pulp Fiction";
            } else if (horario == 2) {
                pelicula = "Pulp Fiction";
            } else {
                cout << "Opción no válida" << endl;
                return 0;
            }
            break;
        case 2:
            cout << "Seleccione el horario:" << endl;
            cout << "1) 19 hrs" << endl;
            cout << "2) 23 hrs" << endl; cin >> horario;
            if (horario == 1) {
                pelicula = "El club de la pelea";
            } else if (horario == 2) {
                pelicula = "El club de la pelea";
            } else {
                cout << "Opción no válida" << endl;
                return 0;
            }
            break;
        case 3:
            cout << "Seleccione el horario:" << endl;
            cout << "1) 09 hrs" << endl;
            cout << "2) 13 hrs" << endl; cin >> horario;
            if (horario == 1) {
                pelicula = "Eterno resplandor";
            } else if (horario == 2) {
                pelicula = "Eterno resplandor";
            } else {
                cout << "Opción no válida" << endl;
                return 0;
            }
            break;
        case 4:
            cout << "Seleccione el horario:" << endl;
            cout << "1) 20 hrs" << endl;
            cout << "2) 22 hrs" << endl; cin >> horario;
            if (horario == 1) {
                pelicula = "Rocky III";
            } else if (horario == 2) {
                pelicula = "Rocky III";
            } else {
                cout << "Opción no válida" << endl;
                return 0;
            }
            break;
        default:
            cout << "Opción no válida" << endl;
            return 0;
    }
    // Captura del número de personas
    cout << "Ingrese el numero de personas: "<< endl; cin >> num_personas;
    // Cálculo del costo de las entradas
    costo_entrada = 45.0 * num_personas;
    // Mensajes para el usuario
    cout << "Funcion en la sala: " << opcion << " en el horario: " << horario << " hrs." << endl;
    cout << "Pelicula: " << pelicula << endl;
    cout << "El costo de entradas para " << num_personas << " personas es de: $" << costo_entrada << " pesos" << endl;
    cout << "Gracias por utilizar el sistema" << endl;
return 0; 
}