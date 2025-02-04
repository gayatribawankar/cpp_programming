//Write a C program to input week number and print week day.
#include<iostream>
using namespace std;
int main(){
    int WeekNumber;
    cout<<"enter a weeknumber (1-7):";
    cin>>WeekNumber;
    switch (WeekNumber){
        case 1:
        cout<<"sunday"<<endl;
        break;
        
        case 2:
        cout<<"monday"<<endl;
        break;

        case 3:
        cout<<"tuesday"<<endl;
        break;

        case 4:
        cout<<"wednsday"<<endl;
        break;

        case 5:
        cout<<"thursday"<<endl;
        break;

        case 6:
        cout<<"friday"<<endl;
        break;

        case 7:
        cout<<"saturday"<<endl;
        break;


    }

}

