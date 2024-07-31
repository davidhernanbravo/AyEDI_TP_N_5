/* Programa en C++ para un bazar que tiene una promo de descuento para vender al por mayor, 
esta dependerá del número de Productos que se compren. 
Si son más de diez, se les dará un 12% de descuento sobre el total de la compra; 
si el número de productos es mayor de veinte, pero menor de treinta, se le otorga un 25% de descuento; 
y si son más treinta productos de le otorgará un 40% de descuento. El precio de cada producto es de $80. */

#include <iostream>
using namespace std;

double descuento12(double precioNeto);
double descuento25(double precioNeto);
double descuento40(double precioNeto);

int main()
    {
        int producto;
        double valorProducto, precioNetoTotal;

        valorProducto = 80;

        cout << "*********************************************************" << endl;
        cout << "BIENVENIDOS A LA TIENDA UNIPRODUCTO TODO POR 80 VERDES!!!" << endl;
        cout << "*********************************************************" << endl;
        cout << endl;

        cout << "El precio del UNICO producto que vendemos es de: u$s " << valorProducto << " por unidad." << endl;
        cout << endl;

        cout << "Ingrese la cantidad de ESTE MARAVILLOSO PRODUCTO que desea adquirir justo aqui: ";
        cin >> producto;
        cout << endl;

        precioNetoTotal = producto * valorProducto;

        cout << "El Precio Neto Total es de: u$s " << precioNetoTotal << endl;
        cout << endl;

        if(producto <= 10)
            {
                cout << "Como su compra no supero los 10 productos no pudo acceder a NUESTROS FABULOSOS DESCUENTOS." << endl;
                cout << endl;
                cout << "El Importe Total a pagar por estos " << producto << " FANTABULOSOS PRODUCTOS adquiridos es de: u$s " << precioNetoTotal << endl;
                cout << endl;
                cout << "***********************************" << endl;
                cout << "GRACIAS POR SU COMPRA!!!" << endl;
                cout << "Y VUELVA PRONTO Y CON MAS DINERO!!!" << endl;
                cout << "***********************************" << endl;
                cout << endl;
            } else if((producto > 10) && (producto <= 20))
                {
                    cout << "Como su compra supero los 10 productos ACCEDIO AL 12 % DE DESCUENTO!!!" << endl;
                    cout << endl;
                    cout << "El Importe Total a pagar por estos " << producto << " FANTABULOSOS PRODUCTOS adquiridos es de: u$s " << descuento12(precioNetoTotal) << endl;
                    cout << endl;
                    cout << "***********************************" << endl;
                    cout << "GRACIAS POR SU COMPRA!!!" << endl;
                    cout << "Y VUELVA PRONTO Y CON MAS DINERO!!!" << endl;
                    cout << "***********************************" << endl;
                    cout << endl;

                } else if((producto > 20) && (producto <= 30))
                    {
                        cout << "Como su compra supero los 20 productos ACCEDIO AL 25 % DE DESCUENTO!!!" << endl;
                        cout << endl;
                        cout << "El Importe Total a pagar por estos " << producto << " FANTABULOSOS PRODUCTOS adquiridos es de: u$s " << descuento25(precioNetoTotal) << endl;
                        cout << endl;
                        cout << "***********************************" << endl;
                        cout << "GRACIAS POR SU COMPRA!!!" << endl;
                        cout << "Y VUELVA PRONTO Y CON MAS DINERO!!!" << endl;
                        cout << "***********************************" << endl;
                        cout << endl;
                    } else
                        {
                            cout << "Como su compra supero los 30 productos ACCEDIO AL 40 % DE DESCUENTO!!!" << endl;
                            cout << endl;
                            cout << "El Importe Total a pagar por estos " << producto << " FANTABULOSOS PRODUCTOS adquiridos es de: u$s " << descuento40(precioNetoTotal) << endl;
                            cout << endl;
                            cout << "***********************************" << endl;
                            cout << "GRACIAS POR SU COMPRA!!!" << endl;
                            cout << "Y VUELVA PRONTO Y CON MAS DINERO!!!" << endl;
                            cout << "***********************************" << endl;
                            cout << endl;
                        }


        return 0;
    }

    double descuento12(double precioNeto)
        {
            double descuento;

            descuento = precioNeto - (precioNeto * 12) / 100;

            return descuento;
        }

    double descuento25(double precioNeto)
        {
            double descuento;

            descuento = precioNeto - (precioNeto * 25) / 100;

            return descuento;
        }

    double descuento40(double precioNeto)
        {
            double descuento;

            descuento = precioNeto - (precioNeto * 40) / 100;

            return descuento;
        }