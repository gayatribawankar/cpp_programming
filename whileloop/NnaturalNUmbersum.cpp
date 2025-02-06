//.Write a program in C to display n terms of natural numbers and their sum.
#include<iostream>
using namespace std;
int main(){
    int i=1,num,sum=0;
    cout<<"enter a number:";
    cin>>num;
    while(i<=num){
        cout<<i<<endl;
        sum=sum+i;
        i++;
    }cout<<sum;
}