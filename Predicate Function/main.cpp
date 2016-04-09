#include <iostream>

using namespace std;

bool isEven(int number) {
    return ((number % 2) == 0);
}

bool isVowel(char letter) {
    if ((letter == 'e') || (letter == 'i') || (letter == 'a') ||
        (letter == 'o') || (letter == 'u'))
        return true;
    else
        return false;
}

int main()
{
    // cout << "Hello world!" << endl;

    int num;
    /*

    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num))
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;
    */

    char ltr;
    cout << "Enter a letter: ";
    cin >> ltr;
    if (isVowel(ltr))
        cout << ltr << " is a vowel." << endl;
    else
        cout << ltr << " is a consonant." << endl;

    return 0;
}
