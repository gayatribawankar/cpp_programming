//print 1 to n number using class and object.
#include<iostream>
using namespace std;
class number{
    public:
    int num,i;
    void getnum();
    void putnum();
};
void number::getnum(){
    cout<<"enter the number:";
    cin>>num;
}
void number::putnum(){
    for(i=1;i<=num;i++){
        cout<<i<<endl;
    
    }
}
int main(){
    number n;
    n.getnum();
    n.putnum();
}
    
