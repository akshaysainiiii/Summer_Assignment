#include <iostream>
using namespace std;

// Write a program to check strong number

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;
    int temp = n;

    if (n <= 0)
    {
        cout << "NOT A STRONG NUMBER";
    }
    else
    {
        int sum = 0;
        while(n>0) {
            int last_degit = n%10;
            int fact = 1;
            for(int i=last_degit; i>=1; i--) {
                fact *= i;
                
            }
            sum += fact;
            n = n/10;
        }
        if (sum == temp)
        {
            cout << "STRONG NUMBER";
        }
        else
        {
            cout << "NOT A STRONG NUMBER";
        }
    }

    return 0;
}