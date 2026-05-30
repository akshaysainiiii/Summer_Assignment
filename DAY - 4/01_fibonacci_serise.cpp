#include <iostream>
using namespace std;

// Write a program to generate fibonacci series

int main()
{

    int n;
    cout << "Enter the no of term you want in fibonacci serise : ";
    cin >> n;

    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}