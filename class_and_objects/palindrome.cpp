//find number is palindrome or not using class and object 
#include<iostream>
using namespace std;
class palindrome{
    public:
    int num;
    void getnum();
    void putnum();
};
void palindrome::getnum(){
    cout<<"enter number:";
    cin>>num;
}
void palindrome::putnum(){
    int rev=0,rem;
    int temp=num;
    while(num>0){
    
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        
    }
        if (temp==rev){
            cout<<"number is palindrome"<<num;
        }
        else{
            cout<<"number is not palindrome"<<num;
        }
    
    
}
int main(){
    palindrome p;
    p.getnum();
    p.putnum();
}