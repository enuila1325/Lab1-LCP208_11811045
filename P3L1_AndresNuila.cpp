#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int opcion;
    cout << "1. Ejercicio 1\n2. Ejercicio \n3. SALIR\nIngrese una opcion";
    cout << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        int valorX;
        double constanteEuler, valorAux, valorDenominador, respFinal;
        cout << "Ingrese el valor de x para la ecuacion";
        cout << endl;
        cin >> valorX;
        constanteEuler = 2.718281828459;
        valorAux = 1 / (pow(constanteEuler, valorX));
        valorDenominador = 1 + valorAux;
        respFinal = 1 / valorDenominador;
        cout << "La respuesta es: " << respFinal;
        break;
    case 2:
        int valorN;
        cout << "Ingrese el valor de n para la sumatoria";
        cin >> valorN;

    default:
        break;
    }
}