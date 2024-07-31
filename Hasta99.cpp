// Hacer un programa en C++ que pida números hasta que el usuario introduzca 99, luego mostrar los números y el promedio.

#include <iostream>
using namespace std;

double promedio(double sumaNumeros, int cantidadNumeros);

int main()
    {
        const int NUMEROS = 100; // Cantidad de números que va a tener el Array.
        double numeros[NUMEROS]; // Declaración de Array estático.

        int contador;
        double numero, sumaNumeros;

        contador = 0;
        sumaNumeros = 0;

        cout << "*******************" << endl;
        cout << "HASTA EL 99 NO PARO" << endl;
        cout << "*******************" << endl;
        cout << endl;

        while (contador < NUMEROS)
            {
                cout << "Ingresa un Numero: ";
                cin >> numero;
                cout << endl;

                if (numero == 99) 
                    {
                    break;
                    }
                        numeros[contador] = numero; // Mientras el condicional siga funcionando ingresa Numeros al Array.
                        sumaNumeros = sumaNumeros + numero;
                        contador++;
            }
        
        cout << "*****************************" << endl;
        cout << "SONASTE CHANGO!!! SALIO EL 99" << endl;
        cout << "*****************************" << endl;
        cout << endl;

        cout << "Los Numeros Ingresados Fueron: " << endl;
        for(int cont = 0; cont < contador; cont++) // El bucle for permite mostrar los números ingresados al Array.
            {
                cout << numeros[cont] << " ";
            }
        cout << endl;
        cout << "Y su Promedio es: " << promedio(sumaNumeros, contador) << endl;
        cout << endl;

        return 0;
    }

    double promedio(double sumaNumeros, int cantidadNumeros)
        {
            double promedio;

            promedio = sumaNumeros / cantidadNumeros;

            return promedio;
        }