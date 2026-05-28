#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int inital_no = n;

    int reverse_no = 0;
    while (n > 0)
    {
        int last_digit = n%10;
        reverse_no = reverse_no*10+last_digit;
        n = n/10;
    }

    if(inital_no == reverse_no) {
        cout<<"It is a palindrome number";
    }

    else {
        cout<<"Not a palindrome number";
    }
   

    return 0;
}