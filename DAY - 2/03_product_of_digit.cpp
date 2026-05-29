#include <iostream>
using namespace std;

// Write a program to find product of digits

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int product = 1;
    while (n > 0)
    {
        int last_digit = n%10;
        product *= last_digit;
        n = n/10;
    }

    cout << "Product of the digit in the number = " << product;

    return 0;
}