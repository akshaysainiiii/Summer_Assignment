#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }

    cout << "Total no of digit in the number = " << count;

    return 0;
}