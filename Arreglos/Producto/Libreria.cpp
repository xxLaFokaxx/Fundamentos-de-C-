#include <iostream>
using namespace std;

int main() {
 char buscarlibro = 's';
 while(buscarlibro == 's' || buscarlibro == 'S'){
        int i;
        string libros[5]={"La malinche", "Cartas de amor a los muertos", "Altar","Rayuela","El Periquillo Sarniento"};
        string autor[5]={"Laura Esquivel"," Ava Dellaira","Catherine Lacey","Julio Cortazar", "Jose Joaquin Fernandez de Lizardie"};
        system("cls");
        cout << "Acceso al sistema de consulta de libros" << endl;
        cout << "captura el valor de la posicion a buscar: "; cin >> i;
        if(i<=0 || i>5){
            cout<< "No se alamaceno algun libro en esa posicion"<<endl;
            }else{   
            cout <<"El titulo del libro es:  "<< libros[i-1] << endl;
            cout <<"El autor del libro es:  "<< autor[i-1] << endl;
        }
        cout << "gracias por utilizar el sistema" << endl; 
        cout << "Deseas buscar otro libro? (s/n): ";
        cin >> buscarlibro;
    }
 return 0;
}