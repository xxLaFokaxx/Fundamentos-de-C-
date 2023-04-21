#include <iostream>
using namespace std;

int main() {
  int nums [5]={2,9,18,100,300};
  string varios[4]={"4","5.2", "A", "Alonso"};
  float numeros[2]={9.6,10.3};
  cout << "valor del indice 0: " << nums[0] << endl;
  cout << "valor del indice 4: " << nums[4] << endl;
  cout << "valor del indice 3 del arreglo varios: " << varios[3] << endl;
  cout << "valor del indice 1 del arreglo numeros: " << numeros[1] << endl;
  for(int i= 0; i<5; i++){
    cout << nums[i] << endl;
  }
  return 0;
}
