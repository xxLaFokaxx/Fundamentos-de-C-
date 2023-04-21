#include <iostream>
using namespace std;

int main() {
    int f,c; 
    float numeros [4][3]={{.1,.2,.3},{1.1,1.2,1.3},{2.1,2.2,2.3},{3.1,3.2,3.3}};
    system("cls");
    for(f=0; f<4; f++){
        for(c=0; c<3; c++){
            cout<<"posicion:["<<f<<","<<c<<"]: ";
            cout << numeros [f][c] <<" |";
        }
        cout<<endl;
    }
 return 0;
}