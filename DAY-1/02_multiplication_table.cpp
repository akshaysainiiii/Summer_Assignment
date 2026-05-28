#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the no : " ;
    cin>>n;

    for(int i=1; i<=10; i++) {
        int table = n*i;
        cout<<table<<" ";
    }

    return 0;
}