//Given 'N', find sum of even numbers from 1 to N.
#include <iostream>
using namespace std;
int main(){
    int N, sum = 0;
    cout << "Enter a number :";
    cin >> N ;
    for (int i = 1; i < N ; i++){
        if (i%2 == 0)
        {
            sum = sum + i;
        }
    }
    cout<< sum;
}