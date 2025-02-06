//Write a program in C++ to display n terms of natural numbers and their sum.
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"enter number:";
    cin>>num;
    for(int i=1; i<=num; i++){
        cout<<i<<endl;
        sum+=i;
        
    }
    cout<<sum<<endl;
}
