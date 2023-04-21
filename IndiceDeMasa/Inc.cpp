#include <iostream>
using namespace std; //Libreria estandar//
int main() {
  float imc, estatura, peso; char nombre;
  cout << "Programa para calcular el indice de masa corporal"<< endl;
  cout << "Yael Alonso Solis" << endl;
  cout << "Escriba su nombre: "<< endl; 
  cin>>nombre;
  cout << "Captura su peso en kg: "<< endl; cin>>peso;
  cout << "Captura su estatura en metros: "<< endl; cin>>estatura;
  imc = (peso/(estatura*estatura));
  cout << imc << endl;
  if (imc<=18){
    cout << nombre << ", su peso es bajo acuda a revision medica"<< endl;
    }else if(imc>18 && imc<=24.9){
        cout << nombre << ", su peso es normal" << endl;
        }else if(imc>24.9 && imc<=26.9){
        cout << nombre << ", tiene sobrepeso acuda a un modulo por informacio" << endl;
            }else{
        cout << nombre << ", tiene obesidad acuda con su medico" << endl;
            }
  return 0;    
}