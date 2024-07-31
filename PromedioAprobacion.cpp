// Hacer un programa en C++ para determinar el promedio de tres notas y determinar si el estudiante aprobó o no.

#include <iostream>
using namespace std;

int main()
    {
        double nota1, nota2, nota3, promedio;

        cout << "***************" << endl;
        cout << "PROMEDIO MORTAL" << endl;
        cout << "***************" << endl;
        cout << endl;

        cout << "Buen Dia Padawan veremos Cuan Fuerte es la Fuerza en Ti:" << endl;
        cout << endl;

        cout << "Ingresa la Primer Nota: ";
        cin >> nota1;

        cout << "Ingresa la Segunda Nota: ";
        cin >> nota2;

        cout << "Ingresa Tercer Nota: ";
        cin >> nota3;
        cout << endl;

        promedio = (nota1 + nota2 + nota3) / 3;

        if(promedio > 4)
            {
                cout << "En Horabuena has Aprobado!!!" << endl;
                cout << "Tu Promedio es: " << promedio << endl;
                cout << endl;
                cout << "*****************" << endl;
                cout << "FELICITACIONES!!!" << endl;
                cout << "*****************" << endl;
                cout << endl;

            } else if(promedio == 4.0)
                {
                    cout << "Estas Aprobado?" << endl;
                    cout << "Pasaste Raspando Tilin: " << promedio << endl;
                    cout << endl;
                    cout << "*************************" << endl;
                    cout << "SOS TAN 4 COMO... TU 4..." << endl;
                    cout << "*************************" << endl;
                    cout << endl;


                } else
                    {
                        cout << "Reventaste como un Sapo!!!" << endl; 
                        cout << "Tu Promedio da Pena: " << promedio << endl;
                        cout << "****************" << endl;
                        cout << "DU BIST KAPUT!!!" << endl;
                        cout << "****************" << endl;
                        cout << endl;
                    }
        return 0;
    }