#include <iostream>
#include <string>

using namespace std;

int main()
{
    string comp = "scissors";
    string user, lowerUser;
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
    else if ((comp == "rock" && lowerUser == "paper") || (comp == "paper" && lowerUser == "scissors") || (comp == "scissors" && lowerUser == "rock"))
    {
        cout << "You win" << endl;
    }
    else
    {
        cout << "You lose" << endl;
    }

    return 0;
}