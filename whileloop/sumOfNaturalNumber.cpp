//Display the sum of first 10 natural numbers
#include<iostream>
using namespace std;
int main(){
    int i=1,num,sum=0;
    cout<<"enter a number:";
    cin>>num;
    while(i<=num){
        sum+=i;
        i++;
    }
    cout<<sum;
}
