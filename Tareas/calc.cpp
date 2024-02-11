#include <iostream>

using namespace std;

int main()
{

    int operacion = 0;
    double num1, num2;
    cout << "Escoge una operación: " << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cout << "5. Potencia" << endl;
    cout << "6. Raíz cuadrada" << endl;
    cout << "7. Salir" << endl;
    cin >> operacion;
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    switch (operacion)
    {
    case 1:
        cout << "El resultado de la suma es: " << (num1 + num2) << endl;
        break;
    case 2:
        cout << "El resultado de la resta es: " << (num1 - num2) << endl;
        break;
    case 3:
        cout << "El resultado de la multiplicación es: " << (num1 * num2) << endl;
        break;
    case 4:
        if (num2 != 0)
        {
            cout << "El resultado de la división es: " << (num1 / num2) << endl;
        }
        else
        {
            cout << "No puedes dividir entre 0." << endl;
        }
        break;
    case 5:
        cout << "El resultado de elevar el primer número a la potencia del segundo es: " << pow(num1, num2) << endl;
        cout << "El resultado de elevar el segundo número a la potencia del primer es: " << pow(num2, num1) << endl;
        break;
    case 6:
        if (num1 >= 0)
        {
            cout << "The squared root of " << num1 << " is: " << sqrt(num1) << endl;
        }
        else
        {
            cout << "You can't get the squared root of a negative number." << endl;
        }

        if (num2 >= 0)
        {
            cout << "The squared root of " << num2 << " is: " << sqrt(num2) << endl;
        }
        else
        {
            cout << "You can't get the squared root of a negative number." << endl;
        }
        break;
    case 7:
        system("pause");
        break;
    default:
        cout << "Operación no válida." << endl;
        break;
    }

    return 0;
}
