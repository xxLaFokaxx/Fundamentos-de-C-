#include <iostream>
using namespace std; //Libreria estandar//

int main(){
    float a, b, res;
    cout << "Yael Alonso Solis" << endl;
    cout << "teclea el valor para el primer numero" << endl;
    cin >> a;
    if(a>0){
        cout << "teclea el valor para el segundo numero" << endl;
        cin >> b;
        if(b<0){
            res = (a +b);
            cout << "captura correcta de los valores" << endl;
            cout << "la suma es: " << res << endl;
        }else{
            cout << "el segundo numero debe ser negativo" << endl;
            exit;
        }
    }else{
        cout << "error -  el primer numero debe ser positivo" << endl;
        exit;
    }
    return 0;
}
