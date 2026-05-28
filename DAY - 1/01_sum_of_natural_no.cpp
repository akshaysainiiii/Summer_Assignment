#include <iostream>
using namespace std;

// Write a program to calculate sum of first N natural numbers

int main()
{

    int n;
    cout << "Enter the nth natural number : ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "The sum of first n natural no is " << sum;

    return 0;
}