#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    int numero = 1;

    while (numero <= 100)
    {
        suma += numero;
        numero++;
    }

    cout << "La suma de los números enteros de 1 a 100 es: " << suma << endl;

    return 0;
}