//.Write a C++ program to calculate the factorial of a given number 5.
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,num,fact=1;
//     while(i<=5){
        
        
//         fact*=i;
//         i++;
//     }cout<<fact;
// }

#include<iostream>
using namespace std;
int main(){
    int i=1,num,fact=1;
    cout<<"enter a number:";
    cin>>num;
    while(i<=num){
        fact*=i;
        i++;
        
    }cout<<fact<<endl;
}