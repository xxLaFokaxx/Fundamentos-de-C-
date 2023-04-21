#include <iostream>
using namespace std;

int main(){
  system("cls");
  int filas, columnas, suma=0, i=0;
  char continuar = 's';   
  /*seccion para determinar dimensiones del arreglo*/
  cout << "Ingrese el numero de filas del arreglo: "; cin >> filas;
  cout << "Ingrese el numero de columnas del arreglo: "; cin >> columnas;
  int valores[filas][columnas];
  /*seccion para agregar los valores por posicion*/
  for(int j=1; j<=filas; j++){
    for(int k=1; k<=columnas; k++){
      cout << "Ingrese el valor para la posicion [" << j << "][" << k << "]: "; cin >> valores[j-1][k-1];
      suma = suma + valores[j-1][k-1];
    }
  }
  system("cls");
  int opcion = 0;
  /*seccion para determianr que opcion ejecutar*/
  while (continuar == 's' || continuar == 'S') { 
        system("cls");
        cout << "MENU:" << endl;
        cout << "1. Promedio por fila" << endl;
        cout << "2. Promedio por columna" << endl;
        cout << "Seleccione una opcion: "; cin >> opcion;
        switch (opcion) {
        /*Opcion 1 para promediar fila*/
        case 1: {
          system("cls");
                /*Seccion para validar fila seleccionada*/
                int fila;
                cout << "Ingrese el numero de fila para calcular el promedio: "; cin >> fila;
                if (fila < 1 || fila > filas){
                cout << "Fila invalida." << endl;
                break;
                }
                /*Seccion para generar operaciones de suma y division para promedio*/
                float promedio = 0;
                for (int k = 0; k < columnas; k++) {
                promedio += valores[fila-1][k];
                }
                promedio /= columnas;
                /*Seccion final de mensajes para opcion 1*/
                cout << "Valores en la fila " << fila << ":" << endl;
                for (int k = 0; k < columnas; k++) {
                cout << "[" << fila << "][" << k+1 << "]: " << valores[fila-1][k] << endl;
                }
                cout << "Promedio: " << promedio << endl;
                break;
        }
        /*Opcion 2 para promediar colunma*/
        case 2: {
          system("cls");
            /*Seccion para validar fila seleccionada*/
            int columna;
            cout << "Ingrese el numero de columna para calcular el promedio: "; cin >> columna;
            if (columna < 1 || columna > columnas) {
            cout << "Columna invalida." << endl;
            break;
            }
            /*Seccion para generar operaciones de suma y division para promedio*/
            float promedio = 0;///
            for (int j = 0; j < filas; j++) {
            promedio += valores[j][columna-1];
            }
            promedio /= filas;
            /*Seccion final de mensajes para opcion 2*/
            cout << "Valores en la columna " << columna << ":" << endl;
            for (int j = 0; j < filas; j++) {
            cout << "[" << j+1 << "][" << columna << "]: " << valores[j][columna-1] << endl; 
            }
            cout << "Promedio: " << promedio << endl;
            break;
        }
        default:
            cout << "Opcion invalida." << endl;
            break;
        }
        /*Seccion mensajes de despedida*/
        cout << "Gracias por utilizar el sistema" << endl; 
        cout << "Deseas promediar otro valor de fila o columa (s/n): "; cin >> continuar;
    }
  return 0;
}