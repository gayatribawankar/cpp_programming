//find number is even or odd using class and object
#include<iostream>
using namespace std;
class evenodd{
    public:
    int num;
    void getnum();
    void putnum();
};
void evenodd::getnum(){
    cout<<"enter number:";
    cin>>num;
}
void evenodd::putnum(){
    if(num%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}
int main(){
    evenodd eo;
    eo.getnum();
    eo.putnum();
}