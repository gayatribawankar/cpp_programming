#include<iostream>
using namespace std;
class one{
    public:
    int a;
};

class two:public one{
    public:
    int b;

    void set(){
        a=5;
        b=10;
    }
    void display(){
        cout<<a<<endl<<b;
    }
};
int main(){
    two ob1;
    ob1.set();
    ob1.display();
}