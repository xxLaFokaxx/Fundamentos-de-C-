#include <iostream> // Libreria//5
using namespace std;

int main(){
    float a, b, c; //a = #numero1, b = #numero2, c = producto suma//
    cout <<"programa que calcula la suma de dos numeros" << endl; //Mensajes para usuario//
    cout <<"captura el valor para el primer numero" << endl;
    cin >> a;
     cout <<"captura el valor para el segundo numero" << endl;
    cin >> b;
   if(a>=0 && b<0){
    c= (a+b);
    cout <<"La suma resulta en: "<< c << endl;
    }else{
        cout<<"el proagrama no se puede ejecutar"<< endl;
   }
   return 0;
}
