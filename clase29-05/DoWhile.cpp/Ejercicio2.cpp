#include <iostream>

using namespace std;

int main()
{

    int numero = 0;
    int indicePar = 0;
    int indiceImpar = 0;
    int pares[100] = {};
    int impares[100] = {};

    do
    {
        cout << "Ingrese un numero:  (digite 0 para salir) ";
        cin >> numero;
        if ((numero % 2 == 0) && numero != 0)
        {
            pares[indicePar] = numero;
            indicePar++;
        }
        else if (numero % 2 == 1)
        {
            impares[indiceImpar] = numero;
            indiceImpar= indiceImpar + 1;
        }
    } while (numero != 0);

    cout << "Resultados: " << endl;
    cout << "Cantidad de pares: " << indicePar << endl;
    cout << "Cantidad de impares: " << indiceImpar << endl;
    for (int i = 0; i < indicePar; i++)
    {
        cout << pares[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < indiceImpar; j++)
    {
        cout << impares[j] << " ";
    }

    return 0;
}
