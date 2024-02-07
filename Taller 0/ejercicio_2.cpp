#include <iostream>

using namespace std;

int main() {
    string tipoPlan, lowerTipoPlan;
    double valorPlan, descuento, valorNeto;

    cout << "Ingrese el tipo de plan (prepago/postpago): ";
    cin >> tipoPlan;
    for (int i = 0; i < tipoPlan.length(); i++) {
        lowerTipoPlan += tolower(tipoPlan[i]);
    }
    cout << "Ingrese el valor del plan (Sin puntos ni comas): ";
    cin >> valorPlan;

    if (lowerTipoPlan == "prepago") {
        if (valorPlan >= 100000 && valorPlan <= 900000) {
            descuento = valorPlan * 0.1;
        } else if (valorPlan > 1000000) {
            descuento = valorPlan * 0.2;
        } else {
            descuento = 0;
        }
    } else if (lowerTipoPlan == "postpago") {
        if (valorPlan < 500000) {
            descuento = valorPlan * 0.15;
        } else if (valorPlan >= 500000 && valorPlan <= 1000000) {
            descuento = valorPlan * 0.2;
        } else {
            descuento = valorPlan * 0.25;
        }
    } else {
        cout << "Tipo de plan no reconocido." << endl;
        return 1;
    }

    valorNeto = valorPlan - descuento;

    cout << "El descuento es de: " << descuento << endl;
    cout << "El valor neto de la compra es: " << valorNeto << endl;

    return 0;
}