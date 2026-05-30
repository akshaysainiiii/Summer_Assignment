#include <iostream>
#include <vector>
using namespace std;

// Write a program to convert decimal to binary

int main()
{

    int n;
    cout << "Enter the decimal number : ";
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
            v.push_back(n % 2);
            n = n / 2;
        }

        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i];
        }
    }

    return 0;
}
