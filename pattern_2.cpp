/*
Q.  1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15...
*/

#include <iostream>
using namespace std;

int main()
{
    int N, a = 1;
    cout << "Enter A Number :";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}