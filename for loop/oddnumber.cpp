//write a C++ program to display the n terms of odd natural numbers and their sum.
#include<iostream>
using namespace std;
int main(){
    int n, i,oddNumber, sum = 0;

    
    cout<<"Enter the number of terms (n): ";
    cin>>n;

   
    for(i = 1; i <= n; i++) {
        oddNumber = 2 * i - 1; 
        cout<<oddNumber<<endl;
        sum =sum+oddNumber; 
    }

    cout<<sum<<endl;

    return 0;
}