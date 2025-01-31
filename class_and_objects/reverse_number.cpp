//Reverse a given number using class and object
#include<iostream>
using namespace std;
class reverse{
    public:
    int num;
    void getnum();
    void putnum();
};
void reverse::getnum(){
    cout<<"enter the number:";
    cin>>num;
}
void reverse::putnum(){
    int rev=0,rem;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
 }
 cout<<rev;
}
int main(){
    reverse r;
    r.getnum();
    r.putnum();
}
