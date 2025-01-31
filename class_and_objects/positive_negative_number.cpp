//find number is positive or negative using class and object
#include<iostream>
using namespace std;
class number{
    public:
    int num;
    void getnum();
    void putnum();
};
void number::getnum(){
    cout<<"enter the number";
    cin>>num;
}
void number::putnum(){
    if(num>=1){
        cout<<"positive number";
    }
    else{
        cout<<"negative number";
    }
}
int main(){
    number n;
    n.getnum();
    n.putnum();
}