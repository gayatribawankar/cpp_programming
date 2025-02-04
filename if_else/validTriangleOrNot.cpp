#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st side: ";
    cin>>a;
    cout<<"enter 2nd side: ";
    cin>>b;
    cout<<"enter 3rd side: ";
    cin>>c;
    if((a+b)>c and (b+c)>a and (c+a)>b){
        cout<<"valid Triangle";
    }else{
        cout<<"invalid Triangle";
    }
    
}