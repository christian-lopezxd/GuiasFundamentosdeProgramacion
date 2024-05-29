#include <iostream>

using namespace std;

int main()
{

    int menu = 0;
    bool continuar = true;
    string nombre[100] = {};
    int edad[100] = {};
    string usuario[100] = {};
    string contrasena[100] = {};
    int indiceUsuario = 0;
    string usuarioTemporal = "";
    string contrasenaTemporal = "";
    bool inicioSesion = false;

    do
    {
        cout << "---Menu de inicio de secion---" << endl;
        cout << "1. Inicio de secion \n2. Registro \n3. Salir \n";
        cin >> menu;
        switch (menu)
        {
        case 1:
            cout << "Ingrese nombre de usuario: ";
            cin >> usuarioTemporal;
            for (int i = 0; i < 100; i++)
            {
                if (usuarioTemporal == usuario[i])
                {
                    do{
                        cout << "Ingrese la contrasena: ";
                    cin >> contrasenaTemporal;
                    if (contrasenaTemporal == contrasena[i])
                    {
                        inicioSesion = true;
                        break;
                    }else{
                        cout<<"Contrasena incorrecta \n";
                    }
                    
                    }while(true);
                }
            }

            if (inicioSesion == false)
            {
                cout << "usuario no existe! \n";
            }

            if (inicioSesion == true)
            {
                cout << "Bienvenido ";
                return 0;
            }
            break;
        case 2:
            cout << "Ingrese nombre completo: ";
            cin >> nombre[indiceUsuario];
            cout << "Ingrese Edad: ";
            cin >> edad[indiceUsuario];
            cout << "Ingrese nombre de usuario: ";
            cin >> usuario[indiceUsuario];
            cout << "Ingrese Contrasena: ";
            cin >> contrasena[indiceUsuario];
            indiceUsuario++;

            break;
        case 3:
            continuar=false;
            break;

        default:
            cout << "Opcion no valida \n";
            break;
        }
    } while (continuar==true);

    return 0;
}