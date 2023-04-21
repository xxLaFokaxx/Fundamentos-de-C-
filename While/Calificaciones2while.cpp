#include <iostream> //Libreria 
using namespace std;

int main(){   
    char calcular_otro_alumno = 's';
        while(calcular_otro_alumno == 's' || calcular_otro_alumno == 'S'){
            int n =3; float suma = 0, promedio, valor,c4 = 0, final;
            string nombre;
            cout << "captura tu nombre: "; cin >> nombre;
            for(int i=1; i<=n; i++){
            cout << "captura la calificacion " << i << ": "; cin >> valor;
            // Valida los valores entre 1 y 10
            if (valor < 0 || valor > 10){
                cout << "Error en el ingreso de valores, debe ingresarse enteros entre 1 y 10."<< endl; 
                i--;
                continue;
            }
                suma= (suma + valor);
            }
            // calcula el promedio de las 3 primeras califcaciones
            promedio = (suma / n);
            // Valida que el valore sea entre 1 y 10 usando un solo ciclo for, Moficar
            for (;;) {
                cout << "captura la calificacion 4: ";
                cin >> c4;
                if (c4 >= 1 && c4 <= 10) {
                    break;
                }
                cout << "Error en el ingreso de valores, debe ingresarse enteros entre 1 y 10." << endl;
            }
            // Fin de la modificacion 
            // Calcula la calificación final
            final = ((promedio *.7)+(c4 *.3));
            cout << "El alumno: "<< nombre << " calificacion final: "<< final << endl;
            // Muestra mensaje final de aprovacion
            if(final >=7.5){
                cout << nombre << " aprobado" << endl;
            }else{
                cout << nombre << " no aprobado" << endl;
            }
            cout << "Deseas calcular otro promedio? (s/n): ";
            cin >> calcular_otro_alumno;
        }
    return 0;  
}    
