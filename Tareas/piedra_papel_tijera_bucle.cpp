#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));

    string options[3] = {"rock", "paper", "scissors"};
    string user, lowerUser;
    string comp;
    int counter = 0;

    while (counter < 5) {
        comp = options[rand() % 3];

        cout << "Choose an option: " << endl
             << "   - Rock" << endl
             << "   - Paper" << endl
             << "   - Scissors" << endl;
        cin >> user;

        for (int i = 0; i < user.length(); i++)
        {
            lowerUser += tolower(user[i]);
        }

        if (comp == lowerUser)
        {
            cout << "It's a tie" << endl;
        }
        else if ((comp == "rock" && lowerUser == "scissors") || (comp == "paper" && lowerUser == "rock") || (comp == "scissors" && lowerUser == "paper"))
        {
            cout << "Computer wins" << endl;
        }
        else
        {
            cout << "You win" << endl;
        }

        counter++;
        comp = "";
        lowerUser = "";
    }

    return 0;
}