#include <iostream>

using namespace std;

int main()
{
    string answer = "Watson";
    string response;
    cout << "Let's play a guessing game. "
         << "You have three tries." << endl;

    cout << "What is the name of the "
         << "computer that played Jeopardy? ";
    getline(cin, response);

    if (response == answer) {
        cout << "That is right!" << endl;
    } else {
        cout << "No, that is not right. Try again." << endl;
        cout << "What is the name of the "
             << "computer that played Jeopardy? ";
        getline(cin, response);

        if (response == answer) {
        cout << "That is right!" << endl;
        } else {
            cout << "No, that is not right. Try again." << endl;
            cout << "What is the name of the "
                 << "computer that played Jeopardy? ";
            getline(cin, response);

            if (response == answer) {
                cout << "That is right!" << endl;
            } else {
                cout << "No, that is not right. No more attempts." << endl;
            }

        }

    }

    return 0;
}
