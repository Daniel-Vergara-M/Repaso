#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
    srand(time(0));
    string options[2] = {"heads", "tails"};
    string coin, newCoin, guess;
    int rounds = 0;
    int random;

    while (rounds < 5)
    {
        cout << "Choose an option: " << endl
             << "   - Heads" << endl
             << "   - Tails" << endl;
        cin >> coin;
        for (int i = 0; i < coin.length(); i++)
        {
            newCoin += tolower(coin[i]);
        }

        random = rand() % 2;
        guess = options[random];


        if (newCoin == guess) {
            cout << "You guessed the face of the coin: " << guess << endl;
        } else {
            cout << "You didn't guess the face of the coin: " << guess << endl;
        }
        rounds++;
        newCoin = "";
        guess = "";
    }

    return 0;
}