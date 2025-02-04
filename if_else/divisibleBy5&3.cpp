#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    if(num%5==0 && num%3==0){
        cout<<"divisible by 5 and 3";
    }else{
        cout<<"not divisible by 5 and 3";
    }
}