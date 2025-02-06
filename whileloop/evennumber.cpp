//Write a C program to display the sum of n terms of even natural numbers.
#include<iostream>
using namespace std;
int main(){
    int i=1,num,evennumber,sum=0;
    cout<<"enter number:";
    cin>>num;
    while(i<=num){
        evennumber=2*i;
        cout<<evennumber<<endl;
        sum+=evennumber;
        i++;
    }
    cout<<sum<<endl;
}
