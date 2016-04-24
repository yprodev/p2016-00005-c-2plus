#include <iostream>

using namespace std;

bool isVowel(char letter) {
    switch(letter) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return true;
            break;
        default:
            return false;
    }
}

int main()
{
    char letterGrade;
    cout << "Enter your letter grade: ";
    cin >> letterGrade;

    /*

    switch(letterGrade) {
        case 'A':
            cout << "..is in the range from 90 to 100." << endl;
            break;
        case 'B':
            cout << "..is in the range from 80 to 90." << endl;
            break;
        case 'C':
            cout << "..is in the range from 70 to 80." << endl;
            break;
        case 'D':
            cout << "..is in the range from 60 to 70." << endl;
            break;
        case 'F':
            cout << "..is in the range from 0 to 59." << endl;
            break;
        default:
            cout << "Don't recognize an input.";
    }

    */

    /*

    switch(letterGrade) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            cout << "You passed!" << endl;
            break;
        case 'F':
            cout << "You failed." << endl;
            break;
        default:
            cout << "Don't recognize an input.";
    }

    */

    string sentence;
    char ltr;
    int numVowels = 0;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    for (int i = 0; i < sentence.size(); ++i) {
        ltr = sentence[i];
        if(isVowel(ltr))
            ++numVowels;
    }
    cout << endl << "There are " << numVowels << " vowels in the sentence." << endl;

    return 0;
}
