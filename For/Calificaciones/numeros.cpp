#include <iostream> //Libreria 
using namespace std;
int main(){
    int n, suma=0, promedio, valor;
    cout << "Cuantos numeros quieres usar: "; cin >>n;
    for(int i=1; i<n; i++){
       cout << "captura el valor: " << i << ": "; cin >> valor;
       suma = (suma + valor);
    }
    promedio = (suma/n);
    cout << "La suma de " << n<< " numeros es: " << suma << endl;
    cout << "El promedio de los numeros es: " << promedio << endl; 
    return 0;
}




