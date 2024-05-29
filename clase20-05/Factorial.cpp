#include <iostream>

using namespace std;
int main(){
int numero;
cout<< "Ingrese un numero: ";
cin >> numero;
if (numero < 0){
cout << "El factorial de un numero negativo no existe.\n";
}
else {
int factorial = 1;
for (int i = numero; i >= 1; i--){
factorial *= i;
}
cout<< "El factorial de " << numero << " es " << factorial << endl;
}
return 0;
}