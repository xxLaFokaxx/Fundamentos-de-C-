#include <iostream>
using namespace std; //Libreria estandar//
int main() {
  float num1,num2,num3,suma,producto; //num1 = numero uno, num2 = numero dos, num3 = numero tres//
  cout << "Programa para calcular el número mayor, suma de numeros y calculo de sus productos"<< endl;
  cout << "Yael Alonso Solis" << endl;
  cout << "Captura num1: "<< endl; 
  cin >> num1;
  cout << "Captura num2: "<< endl; 
  cin >> num2;
  cout << "Captura num3: "<< endl; 
  cin >> num3;
    if(num1>num2 && num1>num3){
    cout <<"El valor mayor de los numeros capturados es: "<< num1 << endl;
      }else if(num2>num1 && num2>num3){
      cout <<"El valor mayor de los numeros capturados es: " << num2 << endl;
        }else{
          cout <<"El valor mayor de los numeros capturados es: " << num3 << endl;
        }
  suma=(num1+num2+num3); 
  cout << "La suma de los numeros es: "<< suma << endl;
  producto=(num1*num2*num3);
  cout<<"El producto de los numeros es: "<< producto << endl;
 return 0;
}