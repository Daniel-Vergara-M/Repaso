#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(0));

    int guessedNumber, generatedNumber;
    int counter = 0;

    while (counter < 5)
    {
        cout << "Guess a number between 1 and 6: ";
        cin >> guessedNumber;
        generatedNumber = rand() % 6 + 1;

        if (guessedNumber == generatedNumber)
        {
            cout << "¡You win! The dice shows: " << generatedNumber << endl;
        }
        else
        {
            cout << "You lose. The dice shows: " << generatedNumber << endl;
        }
        counter++;
        generatedNumber = 0;
        guessedNumber = 0;
    }

    return 0;
}