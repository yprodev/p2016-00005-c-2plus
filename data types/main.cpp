#include <iostream>

using namespace std;

int main()
{
    int num = 2000000000;
    cout << num << endl;

    unsigned int num2 = 3000000000;
    cout << num2 << endl;

    cout << "Int can store up to " << sizeof(int) << " bytes" << endl;
    cout << "Unsigned int can store up to " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Float can store up to " << sizeof(float) << " bytes" << endl;
    cout << "Double can store up to " << sizeof(double) << " bytes" << endl;
    return 0;
}
