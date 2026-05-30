#include <iostream>
#include <vector>
using namespace std;

// Write a program to count set bits in a number

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

        int count = 0;
        for(int i=0; i<v.size(); i++) {
            if(v[i] == 1) count++;
        }

        cout<<"Total number of set bits = "<<count;
    }

    return 0;
}
