#include <iostream>
#include <vector>
using namespace std;

// Write a program to find x^n without pow()

int main()
{

    int x;
    cout << "Enter the base value : ";
    cin >> x;
    int n;
    cout << "Enter the power value : ";
    cin >> n;

    
    int result = 1;
    for(int i=1; i<=n; i++) {
        result *= x;
    }

    cout<<"Result = "<<result;

    
    return 0;
}
