#include <iostream>

using namespace std;

int main()
{
    int number;
    /*
    cin >> number;
    cout << number << endl;
    */

    /*
    In this case space will be a delimeter

        int number1, number2;
        cin >> number1 >> number2;
        cout << number1 << endl << number2 << endl
    */

    /*
    int number1, number2, result;
    cout << "Enter the first integer: ";
    cin >> number1;
    cout << "Enter the second integer: ";
    cin >> number2;
    result = number1 + number2;
    cout << "Here is the sum " << result << endl;

    */

    /*
    string name;
    cin >> name;
    cout << name << endl;
    */

    /*
    string firstName, lastName;
    cin >> firstName >> lastName;
    cout << firstName << " " << lastName << endl;
    */

    /*
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "You name is " << fullName << endl;
    */

    /* Exercise */
    string name, present, city, yourName;
    int age;

    cout << "Enter a name: ";
    getline(cin, name);

    cout << "Enter the present they bought: ";
    getline(cin, present);

    cout << "Enter the city they are from: ";
    getline(cin, city);

    cout << "Enter your name: ";
    getline(cin, yourName);

    cout << "Enter your age: ";
    cin >> age;

    cout << endl << endl;
    cout << "Dear " << name << "," << endl << endl;
    cout << "Thank you for the " << present << ". "
         << "I really like it. I can't believe I'm "
         << "already " << age << " years old, but it "
         << "doesn't feel that much different then "
         << "being " << age - 1 << ". I hope that some "
         << "time this year we can come visit you in "
         << city << "." << endl << endl;
    cout << "Again, thank you for the " << present << "." << endl << endl;
    cout << "Sincerely yours," << endl;
    cout << yourName << endl;









    return 0;
}
