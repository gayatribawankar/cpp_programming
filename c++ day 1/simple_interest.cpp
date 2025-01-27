#include<iostream>
using namespace std;
int main(){
    int p,r,t,si=0;
    cout<<("enter principle amount p:");
    cin>>p;
    cout<<("enter rate per annum r:");
    cin>>r;
    cout<<("enter time per year:");
    cin>>t;
    si=p*r*t/100;
    cout<<si;
}