#include <iostream>
using namespace std;

int main() {
  system("cls");
  int n, suma=0, i=0;
  cout <<"Tamano de arreglo: "; cin >> n; //me gusta mas la h para cambiar la ñ
  int valores[n];
  for(int i=0; i<n; i++){
    cout << "captura el valor para la posicion: " << (i+1)<< ": " << endl;
    cin >> valores[i];
    suma = (suma+valores[i]);
  }
  cout<< "-------------------------------------"<<endl;
  cout<< "Captura el valor de la posicion a buscar: "; cin >> i;
  if(i<0 || i>n){
        cout<< "No se alamaceno valor en esa posicion"<<endl;
    }else{
        cout <<"El valor de la posicion: "<<(i)<<" es: "<<valores[(i-1)]<< endl;
    }
  cout << "La suma de " << n << " numeros es: " << suma << endl;

  return 0;
}


#include <iostream>
using namespace std;

int main() {
  system("cls");
  int filas, columnas, suma=0, i=0;
  cout << "Ingrese el número de filas del arreglo: "; 
  cin >> filas;
  cout << "Ingrese el número de columnas del arreglo: "; 
  cin >> columnas;
  int valores[filas][columnas];
  for(int j=0; j<filas; j++){
    for(int k=0; k<columnas; k++){
      cout << "Ingrese el valor para la posición [" << j << "][" << k << "]: ";
      cin >> valores[j][k];
      suma = suma + valores[j][k];
    }
  }
  break: 
  return 0;
}
