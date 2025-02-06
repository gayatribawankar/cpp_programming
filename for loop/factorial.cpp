//Write a C program to calculate the factorial of a given number 5.
// #include<iostream>
// using namespace std;
// int main(){
//     int num=5;
//     int fact=1;
//     for(int i=1; i<=num; i++){
//         fact*=i;
        
//     }cout<<fact;
// }

#include<iostream>
using namespace std;
int main(){
    int i,num,fact=1;
    cout<<"enter a number:";
    cin>>num;
    for(i=1; i<=num; i++){
        fact*=i;
    }
    cout<<fact;
}