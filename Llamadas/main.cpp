#include <iostream>
#include <string>

using namespace std;

int main() {
    int callType;
    int duration;
    int callValue = 0;
    cout << "Choose an option: " << endl;
    cout << "   1. National call" << endl;
    cout << "   2. International call" << endl;
    cout << "   3. Roaming call" << endl;
    cin >> callType;
    cout << "Enter the duration of the call (As an integer): ";
    cin >> duration;

    switch (callType)
    {
    case 1:
        callValue = duration * 200;
        break;
    case 2:
        callValue = duration * 500;
        break;
    case 3:
        callValue = duration * 300;
        break;
    default:
        cout << "Invalid option" << endl;
        system("pause");
        return 1;
    }
    cout << "The cost of your call is: " + to_string(callValue) << endl;
    return 0;
}