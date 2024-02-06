#include <iostream>
// #include <stdlib.h>

using namespace std;

int main(void)
{

    int coin;
    int guess = 1;
    cout << "Choose an option: " << endl
         << "   0. Heads" << endl
         << "   1. Tails" << endl;
    cin >> coin;
    if (coin < 0 || coin > 1)
    {
        cout << "Invalid option" << endl;
        return 1;
    }

    switch (coin == guess)
    {
    case true:
        cout << "You guessed the face of the coin: " << guess << endl;
        break;
    default:
        cout << "You didn't guess the face of the coin: " << guess << endl;
        break;
    }
    return 0;
}