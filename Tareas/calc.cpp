#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "The result of adding both numbers is: " << num1 + num2 << endl;
    cout << "The result of subtracting both numbers is: " << num1 - num2 << endl;
    cout << "The product of both numbers is: " << num1 * num2 << endl;

    if (num2 != 0)
    {
        cout << "The result of diving both numbers is: " << num1 / num2 << endl;
    }
    else
    {
        cout << "You can't divide by 0." << endl;
    }

    cout << "The first number at the power of the second is: " << pow(num1, num2) << endl;
    cout << "The second number at the power of the first is: " << pow(num2, num1) << endl;

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

    return 0;
}