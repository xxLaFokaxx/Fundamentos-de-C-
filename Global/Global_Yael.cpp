#include <iostream>
#include <string>
using namespace std;

int i, n, aa = 2023, anioNacimiento, intento = 0, pass;
float suma, promedio, valor, cal4, promedio1, promedio2;
string res= "s", usuario;
// Definición de la estructura para almacenar los datos de cada alumno
struct Alumno {
    string nombre, apellidoPaterno, apellidoMaterno, materia, estatus;
    int edad;
    float final;
};

int main(){
//Validar usuario contraseña//
 system("cls");
    cout << "*** Validacion de usuarion ***" << endl;
    for(i= 1; i<=3; i++){
        cout << "Captura el nombre de usuario: "; cin >> usuario;
        cout << "Captura la clave de acceso: "; cin >> pass;
        intento = (intento + 1);
        if((usuario == "Docente" && pass == 1234)||(usuario == "Administrador" && pass == 4321)){
            cout << "Clave de usuario y clave correctos" << endl; break; 
        }else{
            cout << "Usuario y/o clave incorrectos" << endl; 
            if (intento == 3){
                cout << "Utilizo el maximo de intentos, gracias"; exit(-1);
            }
        }
    }
system("cls");
    cout<< "*** Sistema de captura de pacientes ***" << endl;
    cout <<"captura el numero de registros: "; cin >>n;
    Alumno alumnos[n];
// Registro de datos personales y valida año de nacimineto
     for(i =0; i<n; i++){
        suma=0;
        cout <<"realiza la captura de los siguientes datos:" << endl;
        cout <<"Nombre del Alumno " << (i+1) <<": "; cin >> alumnos[i].nombre;
        cout <<"Apellido paterno " << (i+1) <<": "; cin >> alumnos[i].apellidoPaterno;
        cout <<"Apellido materno " << (i+1) <<": "; cin >> alumnos[i].apellidoMaterno;
        for(int w=0; w<1; w++){
                cout <<"Ano de nacimineto " << (i+1) <<": "; cin >> anioNacimiento;
                if(anioNacimiento >=1923 && anioNacimiento<=2023){
                    cout <<"Correcto" << endl;
                }else{
                    cout <<"El ano es incorrecto, volver a teclear el ano" << endl;
                    w--;
                }
            }
            alumnos[i].edad =(aa-anioNacimiento);
            cout << "Materia: "; cin >> alumnos[i].materia;
// Registro de de calificaciones 1 a 3 
            for (int i = 1; i < 4; i ++){
                cout << "captura la calificacion " << i << ": "; cin >> valor;
                    if (valor < 0 || valor > 10){
                        cout << "Error en el ingreso de valores, debe ingresarse enteros entre 1 y 10."<< endl; 
                        i--;
                    }else{
                        cout <<"Valor correcto" << endl; 
                        suma= (suma + valor);
                }
            }
// Registro de de calificacion 4
            for (int i = 0; i < 1; i ++){
                cout << "captura la calificacion 4 " << ": "; cin >> cal4;
                if (cal4 < 0 || cal4 > 10){
                    cout << "Error en el ingreso de valores, debe ingresarse enteros entre 1 y 10."<< endl; 
                    i--;
                }else{
                    cout <<"Valor correcto" << endl; 
            }
            system("cls"); 
            }
// Calcula el promedio 
            promedio1 = ((suma / 3)*.65);
            promedio2 =(cal4*.35);
            alumnos[i].final= (promedio1 + promedio2);
        }
// Buclce de busqueda de registros 
    while( res == "s"){
        cout << "Captura el registro a consultar?" << endl; cin >> i;
        if (i>0 && i<=n){
            cout << "registros: "<< i << " , " << alumnos[i-1].nombre << " " << alumnos[i-1].apellidoPaterno << " " 
            << alumnos[i-1].apellidoMaterno << " , " << " Edad: " <<  alumnos[i-1].edad << " anos, " << " Materia: "
            << alumnos[i-1].materia << " , "<< " Promedio: "<<alumnos[i-1].final << " " << endl;
            if (alumnos[i-1].final >= 7) {
            cout << "Aprobado" << endl;
            } else {
            cout<< "Reprobado" << endl;
         }
            cout << "Consultar otro registro? s(si) -n(no)" << endl; cin >> res;
            system("cls"); 
        }else{
            cout << "*** El registro no existe ***" << endl;
        }
    }
    cout << "Gracias por utilizar el sistema" << endl;
    return 0;
}