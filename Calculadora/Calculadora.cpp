#include <iostream>
using namespace std; //Libreria estandar//

int main(){
    float num1,num2,res; int opc; //opc=opcion, res = resta
    cout << "Menu de opciones" << endl;
    cout << "-----------------" << endl;
    cout << "| 1) Suma       |" << endl;
    cout << "| 2) Resta      |" << endl;
    cout << "| 3) Producto   |" << endl;
    cout << "| 4) Division   |" << endl;
    cout << "-----------------" << endl;
    cout << "Selecciona y captura la opcion: "; cin >> opc;
    cout <<"Captura el valor para el numero 1: ", cin >>num1;
    cout <<"Captura el valor para el numero 2: ", cin >>num2;
    switch (int(opc)){
        case 1:
           res =(num1+num2); cout << "La suma es: " << res <<endl;
        break;
        case 2:
            res =(num1-num2); cout << "La resta es: " << res <<endl;
        break;
        case 3:
            res =(num1*num2); cout << "El producto es: " << res <<endl;
        break;
        case 4:
            if(num2 != 0){
                res =(num1/num2); 
                cout << "La division es: " << res <<endl;
            }else{
                cout << "No es poible dividir entre 0" << endl;
            }
        break;
        default:
         cout <<"Syntax Error"<< endl;
        break;
        }
    return 0;
}