#include <iostream>

using namespace std;
int main(){
int numero = 0;
int factorial = 1;
cout<< "Ingrese un numero: ";
cin >> numero;
if (numero < 0){
cout << "El factorial de un numero negativo no existe.\n";
}
else {
    cout<<"El factorial de el numero: "<<numero<<" es:";
    while (numero>0)
    {
        factorial = factorial * numero;
        numero--;
    }
    cout<<factorial;

}

return 0;
}