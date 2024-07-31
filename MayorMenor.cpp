/* Hacer un programa en C++ que pida dos números enteros. El programa pedirá de nuevo el segundo número 
mientras no sea mayor que el primero. El programa terminará escribiendo los dos números.*/

#include <iostream>
using namespace std;

int main()
    {
        int numero1, numero2;

        numero1 = 0;
        numero2 = 0;

        cout << "***************************" << endl;
        cout << "MIENTRAS EL GATO NO ESTA..." << endl;
        cout << "***************************" << endl;
        cout << endl;

        cout << "Ingrese la cantidad de ratones...: ";
        cin >> numero1;

        while(numero1 >= numero2)
            {
                cout << "Ingrese el numero de gatos...: ";
                cin >> numero2;
            }
        cout << endl;
        cout << "*******************" << endl;
        cout << "SE ACABO LA JODA!!!" << endl;
        cout << "*******************" << endl;
        cout << endl;

        cout << "Los " << numero1 << " ratones fueron superados por los " << numero2 << " gatos." << endl;
        cout << endl;

        cout << "**************************" << endl;
        cout << "MIAUALITY!! GATITOS WIN..." << endl;
        cout << "**************************" << endl;

        
        return 0;
    }