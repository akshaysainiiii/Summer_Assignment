#include <iostream>
using namespace std;

// Write a program to count digits in a  number

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }

    cout << "Total no of digit in the number = " << count;

    return 0;
}