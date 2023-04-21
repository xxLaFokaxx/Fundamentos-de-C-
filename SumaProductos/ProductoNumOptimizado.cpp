#include <iostream>
using namespace std; //Libreria estandar//
const string prompt = "Captura un número: ";  // Constante de cadena para mensaje que se repite//
int main() {
  float num1, num2, num3, suma, producto; //num1 = número uno, num2 = número dos, num3 = número tres;//
  //Mesnaje de bienvenida//
  cout << "Programa para calcular el número mayor, suma y producto de tres números" << endl;
  cout << "Yael Alonso Solis" << endl;
  //Comando que direcciona a la cadena e introducir valor//
  cout << prompt; cin >> num1;
  cout << prompt; cin >> num2;
  cout << prompt; cin >> num3;
   //Evita la necesidad de repetir operaciones//
  suma = num1 + num2 + num3;
  producto = num1 * num2 * num3;
  //Suponemos que el primer numero es el mayor para despues hacer la compracion//
  float mayor = num1;
  if (num2 > mayor) mayor = num2;
  if (num3 > mayor) mayor = num3;
  //Total de mensajes a mostrar//
  cout << "El valor mayor de los números es: " << mayor << endl;
  cout << "La suma de los números es: " << suma << endl;
  cout << "El producto de los números es: " << producto << endl;
  return 0;
}