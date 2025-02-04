//Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<ch<<" "<<"is a uppercase";
    }
    else{
        cout<<ch<<" "<<"is a lowercase";
    }

}