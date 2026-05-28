#include<iostream>
using namespace std;

int main () {

    int n; 
    cout<<"Enter the first n natural no : ";
    cin>>n;

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum+=i;
    }

    cout<<"The sum of first n natural no is "<<sum;
    return 0;
}