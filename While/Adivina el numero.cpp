#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

int main() {
    char jugar_nuevamente = 's';
    
    while (jugar_nuevamente == 's' || jugar_nuevamente == 'S') {
        int intento = 7,num, captura;
        srand(time(NULL)); 
        num = rand()%100; 
        
        cout << "programa para enccontrar numero con 7 aportunidades" << endl; 
        
        while(captura!=num && intento >0){
            cout << "Captura el numero: "; cin >> captura;
            if(num > captura){
                cout << "muy bajo" << endl;
            }else{
                cout << "muy alto" << endl;
            }
            intento = (intento - 1 ); 
            cout << "quedan: " << intento << " intentos" << endl;
        }
        
        if(intento == 0){
            cout << "No adivinastes" << endl;
            cout << "El numero es: " << num << endl;
        } else {
            cout << "leiste mis bits, el numero es; " << num << endl;
        }
        
        cout << "Deseas jugar de nuevo? (s/n): ";
        cin >> jugar_nuevamente;
    }
    
    return 0;
}



