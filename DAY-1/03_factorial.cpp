#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }

    cout << "Factorial = " << fact;

    return 0;
}