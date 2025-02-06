//Write a program in C to display the multiplication table for a given integer.
#include<iostream>
using namespace std;
int main(){
    int n,mul=0;
    cout<<"enter number:";
    cin>>n;
    for(int i=1; i<=10; i++){
        mul=n*i;
        cout<<mul<<endl;
    }
}
