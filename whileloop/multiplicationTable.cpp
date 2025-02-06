//Write a program in C to display the multiplication table for a given integer.
#include<iostream>
using namespace std;
int main(){
    int i=1,num,mul=0;
    cout<<"enter a number:";
    cin>>num;
    while(i<=10){
        mul=i*num;
        cout<<mul<<endl;
        i++;
    }
}