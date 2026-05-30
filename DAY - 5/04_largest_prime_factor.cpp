#include <iostream>
#include <vector>
using namespace std;

// Write a program to find largest prime factor

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (n <= 1)
    {
        cout << "No largest prime factor exist";
    }

    else
    {
        vector<int> v;

        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0) // Finding all the factor of the no
            {
                int prime = 0;

                for (int k = 2; k <= i / 2; k++)  // Find all the prime no
                {
                    if (i % k == 0)
                    {
                        prime++;
                        break;
                    }
                }

                if (prime == 0)
                {
                    v.push_back(i); // Storing all the prime no in the vector
                }
            }
        }

        int max_prime = -1;
        for (int i = 0; i < v.size(); i++)
        {
            if (max_prime < v[i])
                max_prime = v[i]; // Finding the lagrest prime no
        }

        cout << "Largest prime = " << max_prime;
    }

    return 0;
}