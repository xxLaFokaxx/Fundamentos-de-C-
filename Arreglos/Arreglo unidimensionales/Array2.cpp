#include <iostream>
using namespace std;

int main() {
  system("cls");
  int n, suma=0;
  cout <<"Tamano de arreglo: "; cin >> n; //me gusta mas la h para cambiar la ñ
  int valores[n];
  for(int i=0; i<n; i++){
    cout << "captura el valor para la posicion: " << (i+1)<< ": " << endl;
    cin >> valores[i];
    suma = (suma+valores[i]);
  }
  system("cls");
  cout <<"Los valores capturados son: "<< endl;
  for(int i=0; i<n; i++){
    cout << valores[i] << endl;
  }
  cout << "La suma de " << n << " numeros es: " << suma << endl;

  return 0;
}

