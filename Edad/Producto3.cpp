#include <iostream>
using namespace std; //Libreria estandar//

int main(){
    int aa = 2023, an, edad;
    cout << "Yael Alonso Solis" << endl;
    cout << "teclea el aho de nacimiento" << endl;
    cin >> an;
        if(an < 1873 || an >aa){
            cout << "Valor incorrecto" << endl;
        }else{
            edad = (aa - an);
            cout << "Tienes " << edad << " años " << endl;
            exit;
        }
    return 0;
}

