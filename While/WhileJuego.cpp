#include <iostream>
#include <stdio.h>
#include <time.h> 
using namespace std; 

int main() {
    int num, captura; string jugar = "s";
    srand(time(NULL)); //inicializa el valor dec rand a 0  
    while(jugar == "s"){
         int intento = 7;
         system("cls");
         num = rand()%100; //valor daleatrios  entre 1 y 100 
         cout << "programa para enccontrar numero con 7 aportunidades" << endl;
            while(captura!=num && intento >0){
                cout << "Captura el numero: "; cin >> captura;
                system("cls");
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
            }else{
                cout << "leiste mis bits, el numero es; " << num << endl;
            }
    cout << "quieres adivinar otro numero? s-si, n-no: "; cin >> jugar;
    }
    return 0;
}
