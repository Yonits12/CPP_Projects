#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int num1 = 0, num2 = 0;
    int sum;

    cout << "Enter a number" << endl;
    cin >> num1;

    cout << "Enter another number" << endl;
    cin >> num2;

    sum = num1 + num2;
    cout << "The sum is: " << sum;

    return 0;
}
