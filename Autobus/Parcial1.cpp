#include <iostream>
// #include <stdlib.h> Buscar libreria//
using namespace std; //Libreria estandar//
int main() {
  float d, c, pk = 53; //d = Distancia c=Costo , pk = Precio por kilometro
  // system("cls"); //
  cout << "Yael Alonso Solis" << endl;
  cout << "Ingrese la distancia en kilómetros: "<< endl;
  cin >> d;

  if (d <= 0 || d > 630) {   // Segunda condicion solisitada 
    cout << "Distancia fuera de rango" << endl;
  } else if (d <= 20) {  // Tercera condicion solicitada
    cout << "El viaje es sin costo" << endl;
  } else {
    float c = pk * (d / 60); //Considerando que 60km = 53 pesos se desarrolla la formula para calcular el valor, tercer condicion solicitada//
    cout << "El precio del boleto es: $" << c << " pesos" << endl;
  }

  return 0;
}
