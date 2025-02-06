//Write a program in C to read 10 numbers from the keyboard and find their sum and average.
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    float average;
    cout<<"enter 10 number: \n";
    
    for(int i=1; i<=10; i++){
        cout<<"number "<<i<<":";
        cin>>num;
       
        sum+=num;
    }
    average=sum/10.0;
    cout<<"sum of 10 number is:"<<sum<<endl;
    cout<<"avg of 10 number is:"<<average<<endl;
    return 0;
}