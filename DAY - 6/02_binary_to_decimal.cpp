#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// Write a program to convert binary to decimal

int main()
{

    int n;
    cout << "Enter the binary number : ";
    cin >> n;

    if (n < 0)
        cout << "Can't be converted";
    else if (n == 0)
        cout << 0;
    else
    {
        vector<int> v;
        while (n > 0)
        {
            v.push_back(n % 10);
            n = n / 10;
        }

        int a = 0;
        int sum = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 1)
            {
                sum += pow(2, a);
            }
            a++;
        }

        cout << "Decimal no = " << sum;
    }

    return 0;
}
