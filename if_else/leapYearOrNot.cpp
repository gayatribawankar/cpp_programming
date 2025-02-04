//Write a C++ program to check whether a year is leap year or not.
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter a year:";
    cin>>year;
    if(year%400==0){
    cout<<year<<" "<<"is a leap year";
}
else if(year % 100==0){
    cout<<year<<" "<<"is not a leap year";   //century year like 2000,3000
}
else if(year % 4==0){
    cout<<year<<" "<<"is a leap year";
}
else{
    cout<<year<<" "<<"is not a leap year";
}
}