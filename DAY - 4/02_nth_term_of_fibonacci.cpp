#include <iostream>
using namespace std;

// Write a program to find nth fibonacci term

int main()
{

    int n;
    cout << "Enter the nth term fibonacci serise : ";
    cin >> n;

    int a = 0, b = 1, c;
    int start = 1;
    while(start<n) {
        c = a + b;
        a = b;
        b = c;
        start++;
    }

    cout<<"Nth term of fibonacci serise = "<<a;

    return 0;
}