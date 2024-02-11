#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "El número " << numero << " es par.\n";
    }
    else
    {
        cout << "El número " << numero << " es impar.\n";
    }

    return 0;
}