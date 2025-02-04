//Write a C++ program to input any character and check whether it is alphabet, digit or special character.

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        cout<<ch<<"is an alphabet";
    }
    else if(ch>='0' && ch<='9'){
        cout<<ch<<"is a digit";
    }
    else{
        cout<<ch<<"spl character";
    }
    return 0;
}