#include <iostream>

using namespace std;

int main(void)
{

    int babyMonths;
    float babyGrams, doses;
    cout << "Enter the age of the baby in months (As an integer): ";
    cin >> babyMonths;
    if (babyMonths < 0 || babyMonths > 12)
    {
        cout << "Invalid input, baby must have less than a year old." << endl;
        return 1;
    }
    cout << "Enter the weight of the baby in grams (As an integer): ";
    cin >> babyGrams;
    if (babyMonths < 0 || babyMonths > 12 || babyGrams < 0 || babyGrams > 10000)
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    doses = ((babyGrams + 10000) / (babyMonths * 10)) * 8;
    cout << "The baby should receive " << doses << " doses of the vaccine" << endl;
    return 0;
}