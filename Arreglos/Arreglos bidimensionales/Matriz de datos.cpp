#include <iostream>
using namespace std;

int main() {
    char respuesta = 's';
    int filas, columnas,f,c;
    system("cls");
    cout << "Ingresa el numero de filas: "; cin >> filas;
    cout << "Ingresa el numero de columnas: "; cin >> columnas;
    float numeros[filas][columnas];
    system("cls");
    for (f = 0; f < filas; f++) {
        for (c = 0; c < columnas; c++) {
            cout << "Ingrese el valor de la posicion:[" << f << "," << c << "]: ";
            cin >> numeros[f][c]; system("cls");
        }
    } 
    for (f = 0; f < filas; f++) {
        for (c = 0; c < columnas; c++) {
            cout << "posicion:[" << (f) << "," << (c) << "]: ";
            cout << numeros[f][c] << " |";
        }
        cout << endl;
    }
    while (respuesta == 's' || respuesta == 'S') { 
        system("cls");
        cout << "Ingresa la fila del numero que quieres buscar: "; cin >> f;
        cout << "Ingresa la columna del numero que quieres buscar: "; cin >> c;
        if (f >= 0 && f <= filas && c >= 0 && c <= columnas) { 
            cout << "El numero en la posicion [" << f << "][" << c << "] es: " << numeros[f][c] << endl;
        } else {
            cout << "Error: La posicion [" << f << "][" << c << "] no existe." << endl;
        }
        cout << "Quieres buscar otro numero? (s/n): "; cin >> respuesta;
    }
    return 0;
}