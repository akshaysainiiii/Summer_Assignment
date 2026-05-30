#include <iostream>
using namespace std;

// Write a program to print factors of a number

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Can't be factorize";
    }

    else
    {

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                cout << i << " ";
        }
    }

    return 0;
}