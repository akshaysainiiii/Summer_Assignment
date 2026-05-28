#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int sum = 0;
    while (n > 0)
    {
        int last_digit = n%10;
        sum+=last_digit;
        n = n/10;
    }

    cout << "Total sum of the digit in the number = " << sum;

    return 0;
}