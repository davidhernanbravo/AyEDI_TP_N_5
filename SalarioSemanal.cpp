/* Hacer un programa en C++ para ayudar a un trabajador a saber cuál será su salario semanal,se sabe que,
si trabaja 40 horas o menos, se le pagará $200 por hora, pero si trabaja más de 40 horas entonces las horas
extras se le pagarán a $250 por hora. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
    {
        int horasTrabajadas, horasExtras;
        double salarioNormal, salarioExtra;

        salarioNormal = 200.00;
        salarioExtra = 250.00;

        cout << "**************************" << endl;
        cout << "CALCULO DE SALARIO SEMANAL" << endl;
        cout << "**************************" << endl;
        cout << endl;

        cout << "Buenos dias esclavo... digo empleado." << endl;
        cout << endl;

        cout << "Estos son los montos que cobraras por dejar TU SANGRE..." << endl;
        cout << endl;

        cout << "Hora de Jornada laboral normal: $ 200.00" << endl;
        cout << "Hora de Jornada a tiempo extra: $ 250.00" << endl;
        cout << endl;

        cout << "Ingrese la cantidad de horas trabajadas en la semana: ";
        cin >> horasTrabajadas;
        cout << endl;

        if(horasTrabajadas <= 40)
            {   
                cout << "Cantidad Total de Horas Trabajadas: " << horasTrabajadas << endl;
                cout << endl;

                cout << "Tu Salario Semanal Sin Extras es: $ " << showpoint << horasTrabajadas * salarioNormal << endl;
                cout << endl;

            } else
                {
                    horasExtras = horasTrabajadas - 40;

                    cout << "Cantidad de Horas Extras Trabajadas: " << horasExtras << endl;
                    cout << "Cantidad Total de Horas Trabajadas: " << horasTrabajadas + horasExtras << endl;
                    cout << endl;

                    cout << "Pago por Hora Normal: $ " << showpoint << 40 * salarioNormal << endl;
                    cout << "Pago por Hora Extra: $ " << showpoint << horasExtras * salarioExtra << endl;
                    cout << "Tu Salario Semanal Con Horas Extras Incluidas es: $ " << showpoint << (40 * salarioNormal) + (horasExtras * salarioExtra) << endl;
                    cout << endl;

                }
        cout << "****************************************************" << endl;
        cout << "VERDAD ABSOLUTA:" << endl;
        cout << "Tu Patron es una Rata Inmunda si te paga esa miseria" << endl;
        cout << "De todas maneras ser asalariado es UNA CAGADA" << endl;
        cout << "Mejor estudia para Analista de Sistemas" << endl;
        cout << "Y HACKEATE LA CUENTA BANCARIA DE ELON..." << endl;
        cout << "****************************************************" << endl;
        cout << endl;

        return 0;
    }