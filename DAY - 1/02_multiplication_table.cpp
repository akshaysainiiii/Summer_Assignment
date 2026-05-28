#include <iostream>
using namespace std;

// Write a program to Print multiplication table of a given number

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        int table = n * i;
        cout << table << " ";
    }

    return 0;
}