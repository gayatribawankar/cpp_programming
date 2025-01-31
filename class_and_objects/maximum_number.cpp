//find maximum between two numbers using class and object
#include<iostream>
using namespace std;
class numbers{
    public:
    int num1,num2;
    void getnum();
    void max();
};
void numbers::getnum(){
    cout<<"enter numbers:";
    cin>>num1>>num2;
}
void numbers::max(){
    if(num1>num2){
        cout<<"maximum is:"<<num1<<endl;
    }else{
        cout<<"maximum is:"<<num2<<endl;
    }
}
int main(){
    numbers n;
    n.getnum();
    n.max();
}