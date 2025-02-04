//take a positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;
    if(num>99 && num<1000){
        cout<<"given number is three digit number";
    }else{
        cout<<"not a three digit number";
    }
}