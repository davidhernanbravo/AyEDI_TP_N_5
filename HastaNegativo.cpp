/* Hacer un programa en C++ que pida números mientras no se escriba un número negativo. 
El programa terminará escribiendo la suma de los números introducidos.*/

#include <iostream>
using namespace std;

int main()
    {
        int numero, suma;

        numero = 0;
        suma = 0;

        cout << "****************************************************" << endl;
        cout << "SUMEMOS EN EL BOSQUE MIENTRAS EL NEGATIVO NO ESTA..." << endl;
        cout << "****************************************************" << endl;
        cout << endl;

        while(numero > -1)
            {
                cout << "Ingresa tu numerito para sumar: ";
                cin >> numero;
                suma = suma + numero;
            }
            
        cout << endl;
        cout << "***************************" << endl;
        cout << "HASTA ACA LLEGASTE TILIN..." << endl;
        cout << "***************************" << endl;
        cout << endl;

        cout << "La suma se termino debido a que " << numero << " fue ingresado." << endl;
        cout << "La suma de todos los numeros sin tener en cuenta el negativo es: " << suma - numero << endl;
        cout << "La suma de todos los numeros incluyendo el numero negativo es: " << suma << endl;
        cout << endl;

        return 0;
    }