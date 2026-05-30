#include <iostream>
#include <vector>
using namespace std;

// Write a program to print armstrong numbers in a range

int main()
{

    int n;
    cout << "Enter the started no of range : ";
    cin >> n;

    int m;
    cout << "Enter the ending no of range : ";
    cin >> m;

    int temp, x;

    if (n < 0 && m < 0)
    {
        cout << "No armstrong number exits in the given range";
    }

    else
    {

        if (n < 0)
        {
            n = 1;
            cout << 0 << " ";
        }

        for (int i = n; i <= m; i++)
        {
            temp = i;
            x = i;

            vector<int> v;
            while (x > 0)
            {
                v.push_back(x % 10); // Strong deigits of the number in a vector
                x = x / 10;
            }

            int size = v.size();
            int a = 0;

            vector<int> v1;
            while (a < size)
            {

                int power_digit = 1;

                for (int i = 0; i < size; i++) // Taking power of each degit of the number
                {
                    power_digit *= v[a];
                }
                v1.push_back(power_digit); // Storing power in another vector
                a++;
            }

            int degit_sum = 0;
            for (int i = 0; i < size; i++) // Calculating sum of the power of digit
            {
                degit_sum += v1[i];
            }

            if (degit_sum == temp)
            {
                cout << temp << " ";
            }
        }
    }

    return 0;
}