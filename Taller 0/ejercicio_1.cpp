#include <iostream>
#include <string>

using namespace std;

int main()
{
    int deuda;
    float descuento, valorPagar;
    cout << "Ingrese su deuda (Sin puntos ni comas): ";
    cin >> deuda;

    if (deuda < 0)
    {
        cout << "La deuda no puede ser negativa" << endl;
        return 1;
    }
    else if (deuda < 60000)
    {
        cout << "La deuda tiene que ser mayor o igual a 60000 para aplicar un descuento" << endl;
        return 1;
    }
    else if (deuda <= 150000)
    {
        descuento = 0.2;
    }
    else if (deuda <= 300000)
    {
        descuento = 0.3;
    }
    else if (deuda <= 800000)
    {
        descuento = 0.4;
    }
    else
    {
        descuento = 0.5;
    }
    valorPagar = deuda - (deuda * descuento);

    cout << "Se le ha aplicado un descuento del " << descuento * 100 << "%, el valor a pagar es: " << valorPagar << endl;

    return 0;
}