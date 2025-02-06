//write a C program to display the n terms of odd natural numbers and their sum.
#include<iostream>
using namespace std;
int main(){
    int i=1,num,oddnumber,sum=0;
    cout<<"enter number:";
    cin>>num;
    while(i<=num){
        
        oddnumber=2*i-1;
        cout<<oddnumber<<endl;
        sum+=oddnumber;
        i++;
    }cout<<sum<<endl;
}
