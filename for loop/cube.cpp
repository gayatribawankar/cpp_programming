//Write a program in C to display the cube of the number up to an integer.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter an integer:";
    cin>>num;
    cout<<"cube of number from 1 to"<<num<<"are:\n";
    for(int i=1; i<=num; i++){
        cout<<"cube of"<<i<<"is:"<<i*i*i<<endl;

    }
}
