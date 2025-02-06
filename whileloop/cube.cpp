//Write a program in C to display the cube of the number up to an integer.
#include<iostream>
using namespace std;
int main(){
    int i=1,num,cube=0;
    cout<<"enter an number:";
    cin>>num;
    while(i<=num){
        
        cube=i*i*i;
        i++;
    }cout<<cube;
}
