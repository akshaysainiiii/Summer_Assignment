#include <iostream>
using namespace std;

// Write a program to check perfect number

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "NOT A PERFECT NUMBER";
    }
    else
    {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
                sum += i;
        }
        if (sum == n)
        {
            cout << "PERFECT NUMBER";
        }
        else
        {
            cout << "NOT A PERFECT NUMBER";
        }
    }

    return 0;
}