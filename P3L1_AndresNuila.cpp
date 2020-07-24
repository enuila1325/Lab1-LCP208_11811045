#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int opcion;
    while (opcion != 3)
    {
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
            cout << endl;
            break;
        case 2:
            int valorN;
            double operador1, operador2, resultFinal, calculo;
            resultFinal = 0;
            calculo = 0;
            cout << "Ingrese el valor de n para la sumatoria";
            cout << endl;
            cin >> valorN;
            for (int i = 0; i <= valorN; i++)
            {
                operador1 = (2 * i) - 1;
                operador2 = (2 * i) + 1;
                calculo = operador1 * operador2;
                resultFinal = resultFinal + calculo;
            }
            cout << "El resultado es: " << resultFinal;
            cout << endl;
            break;
        default:
            break;
        }
    }
}