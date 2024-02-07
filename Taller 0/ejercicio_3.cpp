#include <iostream>

using namespace std;

int main() {
    double sueldo, nuevoSueldo;

    cout << "Ingrese el sueldo del trabajador (En números y sin puntos o comas): ";
    cin >> sueldo;

    if (sueldo < 1000000) {
        nuevoSueldo = sueldo * 1.15;
        cout << "El nuevo sueldo del trabajador es: " << nuevoSueldo << endl;
    } else {
        cout << "El sueldo del trabajador no cambia: " << sueldo << endl;
    }

    return 0;
}