#include <iostream> // Libreria//5
using namespace std;

int main(){
    float r, a; //r = radio, a = area//
    float pi = 3.1416;
    cout << "Yael Alonso Solis" << endl; //cout es para mensajes//
    cout <<"programa que calcula el area de un circulo" << endl;
    cout << "captura el valor para radio en mts" << endl;
    cin >> r;
    if(r>0){
        a = (pi * (r *r));
        cout << "el area del circulo es:" << a << "mts cuadrados" << endl;
    }else{
        cout << "el valor de radio es menor o igual a 0" << endl;
        cout <<"no es posible calcular el area"<< endl;
    }
    return 0;
} 