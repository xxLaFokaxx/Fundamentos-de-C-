#include <iostream> //Libreria 
using namespace std;

int main()  
{  
    int n =3;
    float suma = 0, promedio, valor,c4, final;
    string nombre;
    cout << "captura tu nombre: "; cin >> nombre;
    for(int i=1; i<=n; i++){
        cout << "captura la calificacio: "<<i << ": "; cin >> valor;
        suma= (suma + valor);
    }
    promedio =(suma /n);
    cout << "captura la calificacion 4: "; cin >> c4;
    final = ((promedio*.6)+(c4*.4));
    cout << "El alumno: "<< nombre << " calificacion final: "<< final << endl;
    if(final >=7){
        cout << nombre << " aprovado" << endl;
    }else{
        cout << nombre << " no aprovado" << endl;
    }
    return 0;  
} 



