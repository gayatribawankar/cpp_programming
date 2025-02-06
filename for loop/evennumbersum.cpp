//Write a C program to display the sum of n terms of even natural numbers.
#include<iostream>
using namespace std;
int main(){
    int i,n,evennumber,sum=0;
    cout<<"enter a number:";
    cin>>n;
    for(i=1; i<=n; i++){
        evennumber=2*i;
        cout<<evennumber<<endl;
        sum=sum+evennumber;
    }
    cout<<sum<<endl;
}