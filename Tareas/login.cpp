#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username, password;
    string usernameLower, passwordLower;
    string defaultUsername = "admin";
    string defaultPassword = "admin";
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;
    for (int i = 0; i < username.length(); i++)
    {
        usernameLower += tolower(username[i]);
    }
    for (int i = 0; i < password.length(); i++)
    {
        passwordLower += tolower(password[i]);
    }

    switch (usernameLower == defaultUsername && passwordLower == defaultPassword)
    {
    case true:
        cout << "Welcome " << username << "!" << endl;
        break;
    default:
        cout << "¡Incorrect username or password!" << endl;
        break;
    }

    return 0;
}