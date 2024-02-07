#include <iostream>

using namespace std;

int main() {
    int horasTrabajadas;
    double salarioSemanal;

    cout << "Ingrese las horas trabajadas por el empleado (En números y sin puntos o comas): ";
    cin >> horasTrabajadas;

    if (horasTrabajadas <= 0) {
        cout << "Las horas trabajadas no pueden ser negativas o 0" << endl;
        return 1;
    }
    else if (horasTrabajadas <= 35) {
        salarioSemanal = horasTrabajadas * 40000;
    } else {
        salarioSemanal = 35 * 40000 + (horasTrabajadas - 35) * 50000;
    }

    cout << "El salario semanal del empleado es: " << salarioSemanal << endl;

    return 0;
}