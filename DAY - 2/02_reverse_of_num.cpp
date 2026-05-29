#include <iostream>
using namespace std;

// Write a program to reverse a number

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int reverse_no = 0;
    while (n > 0)
    {
        int last_digit = n%10;
        reverse_no = reverse_no*10+last_digit;
        n = n/10;
    }

    cout << "Reverse number = " << reverse_no;

    return 0;
}