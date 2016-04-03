#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, result;
    x = 3;
    y = 4;
    result = abs(x + y); // if y = -4 we will get 1
    cout << result << endl;

    result = abs(x) + abs(y);
    cout << result << endl;

    result = pow(x, 3) / x + y;
    cout << result << endl;

    // sqrt does not like negative numbers
    // like y = -4 to the odd power (like 5)
    result = sqrt(pow(x, 6) + pow(y, 5));
    cout << result << endl;

    result = pow(x + sqrt(y), 7);
    cout << result << endl;





    return 0;
}
