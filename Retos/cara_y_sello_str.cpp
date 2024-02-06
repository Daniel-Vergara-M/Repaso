#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    string coin, newCoin, guess = "heads";
    cout << "Choose an option: " << endl
         << "   - Heads" << endl
         << "   - Tails" << endl;
    cin >> coin;
    for (int i = 0; i < coin.length(); i++)
    {
        newCoin += tolower(coin[i]);
    }
    switch (newCoin == guess)
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