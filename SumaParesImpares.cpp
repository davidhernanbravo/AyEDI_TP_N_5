// Hacer un programa en C++ para Calcular la suma de los números pares e impares comprendidos entre 1 y n (n lo introduce el usuario).

#include <iostream>
using namespace std;

int main()
    {
        int numero, contador, sumaPar, sumaImpar;

        contador = 1;
        sumaPar = 0;
        sumaImpar = 0;

        cout << "***************************" << endl;
        cout << "SEPARANDO LA PAJA DEL TRIGO" << endl;
        cout << "***************************" << endl;
        cout << endl;

        cout << "Ingresa tu numero favorito: ";
        cin >> numero;
        cout << endl;

        while(contador <= numero)
            {
                if(contador % 2 == 0) // Si el resto es igual a 0 es Par.
                    {
                        sumaPar = sumaPar + contador;

                    } else
                        {
                            sumaImpar = sumaImpar + contador;
                        }
                    
                contador++;
            }

            cout << "*********************************" << endl;
            cout << "Separando... Wait a moment please" << endl;
            cout << "*********************************" << endl;
            cout << endl;

            cout << "La suma de numeros pares desde 1 hasta " << numero << " es: "<< sumaPar << endl;
            cout << "La suma de numeros impares desde 1 hasta " << numero << " es: "<< sumaImpar << endl;
            cout << endl;

            cout << "*************************************************" << endl;
            cout << "QUEDATE SIEMPRE CON LO QUE REALMENTE TE HAGA BIEN" << endl;
            cout << "*************************************************" << endl;
            cout << endl;
                
        return 0;
    }