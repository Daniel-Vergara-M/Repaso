#include <iostream>

using namespace std;

int main()
{
    double velocidad_auto1, velocidad_auto2, distancia, tiempo;

    cout << "Ingrese la velocidad del primer automóvil (en km/h): ";
    cin >> velocidad_auto1;
    cout << "Ingrese la velocidad del segundo automóvil (en km/h): ";
    cin >> velocidad_auto2;
    cout << "Ingrese la distancia entre las ciudades A y B (en km): ";
    cin >> distancia;

    double tiempo = distancia / (velocidad_auto1 + velocidad_auto2);

    cout << "Los automóviles se encuentran después de " << tiempo << " horas.\n";

    return 0;
}