#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  float numero, acumulador = 0;
  string mensaje = "captura el numero: ";
  cout << mensaje; cin >>numero;
  while(numero>0 && numero<=125 ){
    acumulador = (acumulador + numero);
    cout << mensaje; cin >>numero;
  } 
  cout << "ciclo while terminado" << endl;
  cout << "la suma de los numeros al romper ciclo es: " << acumulador << endl;
  return 0;
}
