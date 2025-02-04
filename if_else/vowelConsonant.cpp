//Write a C program to input any alphabet and check whether it is vowel or consonant.

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter an alphabet:";
    cin>>ch;
    if(ch=='a','e','i','o','u'){
        cout<<ch<<"is an vowel"<<endl;
    }
    else{
        cout<<ch<<"is a consonant"<<endl;
    }
}