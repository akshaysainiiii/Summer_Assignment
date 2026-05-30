#include <iostream>
#include <vector>
using namespace std;

// Write a program to check armstrong number

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;
    int temp = n;

    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % 10); // Strong deigits of the number in a vector
        n = n / 10;
    }

    int size = v.size();
    int a = 0;

    vector<int> v1;
    while (a < size)
    {

        int power_digit = 1;

        for (int i = 0; i < size; i++)  // Taking power of each degit of the number
        { 
            power_digit *= v[a];
        }
        v1.push_back(power_digit); // Storing power in another vector
        a++;
    }

    int degit_sum = 0;
    for (int i = 0; i < size; i++)  // Calculating sum of the power of digit
    { 
        degit_sum += v1[i];
    }

    if (degit_sum == temp)
    {
        cout << "It is a armstrong number";
    }

    else
    {
        cout << "Not a armstrong number";
    }

    return 0;
}