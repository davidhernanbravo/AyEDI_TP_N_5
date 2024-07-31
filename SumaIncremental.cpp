/* Hacer un programa en C++ que pida un número y 
calcule la suma desde 1 hasta ese número, en incrementos de uno. */

#include <iostream>

using namespace std;

int main()
    {
        int numero, contador, suma;

        contador = 1;
        suma = 0;

        cout << "**************************" << endl;
        cout << "LA CUENTA DEL NUMERO FINAL" << endl;
        cout << "**************************" << endl;
        cout << endl;

        cout << "Ingresa el numero al cual quieras llegar: ";
        cin >> numero;
        cout << endl;

        while(contador <= numero)
            {
                suma = suma + contador;
                contador++;

            }   
            
            cout << "Tu Numero Final es: " << numero << endl;
            cout << "La Suma incremental en 1 hasta el Numero de la Muerte es: " << suma << endl;
            cout << endl;

        return 0;
    }