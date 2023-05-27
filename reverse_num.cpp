#include <iostream>
using namespace std;

int main()
{
    int a, digit = 0, rem;
    cout << "Enter a number :";
    cin >> a;

    while (a != 0)
    {
        rem = a % 10;
        digit = digit * 10 + rem;
        a /= 10;
    }
    cout << digit;
}