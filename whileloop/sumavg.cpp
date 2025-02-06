//Write a program in C to read 10 numbers from the keyboard and find their sum and average.
#include<iostream>
using namespace std;
int main(){
    int i=1,num,sum=0;
    float avg;
    cout<<"enter 10 numbers:\n";
    while(i<=10){
        cout<<"number"<< i <<":";
        cin>>num;
        sum+=num;
        i++;
    }
    avg=sum/10.0;
    cout<<sum<<endl;
    cout<<avg<<endl;
    return 0;

}