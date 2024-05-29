#include <iostream>

using namespace std;

int main (){
    int numero= 9;
    int adivinar = 9;
    do{
        cout<<"Advina el numero que estoy pensando  \n";
        cin>>numero;
        if(numero!=adivinar){
            cout<<"Vuelve a intentarlo \n";
        }

    }while(numero!=adivinar);

    cout<<"Felicidades adivinaste \n";




    return 0;
}