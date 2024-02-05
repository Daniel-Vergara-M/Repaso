#include <iostream>
using namespace std;

int main(void)
{

    float temperatureFahrenheit, temperatureCelsius;
    cout << "Enter the temperature in Fahrenheit (As an integer): ";
    cin >> temperatureFahrenheit;
    temperatureCelsius = (temperatureFahrenheit - 32) / 1.8;
    cout << "The temperature in Celsius is: " << temperatureCelsius << endl;

    system("pause");
    return 0;
}