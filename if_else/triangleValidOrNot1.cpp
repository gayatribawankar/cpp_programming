//Write a C++ program to input all sides of a triangle and check whether triangle is valid or not.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"enter c";
    cin>>c;
    if(a+b>c && b+c>a && a+c>b){
        cout<<"triangle is valid"<<endl;
    }else{
        cout<<"triangle is not valid"<<endl;
    }
}