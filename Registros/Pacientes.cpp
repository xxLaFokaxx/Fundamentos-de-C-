#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n, i, aa = 2023, intento = 0, pass; string res= "s", usuario;
    struct cliente{
       string nombre, paterno, materno; int an, edad;
    };
    //Validar usuario//
    system("cls");
    cout << "*** Validacion de usuarion ***" << endl;
    for(i= 1; i<=3; i++){
        cout << "Captura el nombre de usuario: "; cin >> usuario;
        cout << "Captura la clave de acceso; "; cin >> pass;
        intento = (intento + 1);
        if((usuario == "evs" && pass == 9876)||(usuario == "fi" && pass == 1596)){
            cout << "Clave de usuario y clave correctos" << endl; break; 
        }else{
            cout << "Usuario y/o clave incorrectos" << endl; 
            if (intento == 3){
                cout << "utilizo el maximo de intentos, gracias"; exit(-1);
            }
        }

    }
    system("cls");
    cout<< "*** Sistema de captura de pacientes ***" << endl;
    cout <<"captura el numero de registros: "; cin >>n;
    cliente clientes[n];
    for(i =0; i<n; i++){
        cout <<"realiza la captura de los siguientes datos:" << endl;
        cout <<"Nombre registro " << (i+1) <<": ";
        cin >> clientes[i].nombre;
        cout <<"Paterno registro " << (i+1) <<": ";
        cin >> clientes[i].paterno;
        cout <<"Materno registro " << (i+1) <<": ";
        cin >> clientes[i].materno;
        cout <<"Aho de nacimineto registro " << (i+1) <<": ";
        cin >> clientes[i].an;
        clientes[i].edad = (aa - clientes[i].an);
        
        system("cls");
    }

    while(res == "s"){
        cout << "Captura el registro a consultar?" << endl; cin >> i;
        if (i>0 && i<=n){
            cout << "registros: "<< i<< " " 
            << clientes[i-1].nombre << " " 
            << clientes[i-1].paterno << " " 
            << clientes[i-1].materno << " edad " 
            <<  clientes[i-1].edad << " ahos"<< endl; 
            cout << "Consultar otro registro? s(si) -n(no)" << endl;
            cin >> res;
            system("cls"); 
        }else{
            cout << "*** El registro no existe ***" << endl;
        }
    }
    cout << "Gracias poor utilizar el sistema" << endl;
    return 0;
}