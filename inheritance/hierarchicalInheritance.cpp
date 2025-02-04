#include<iostream>
using namespace std;
class one{
    public:
    int a;
    void set(){
        a=5;
    }
    void display(){
        cout<<a<<endl;
    }
};

class two:public one{
    public:
    int b;
    void set1(){
        b=10;
    }
    void display1(){
        cout<<b<<endl;
    }
};
class three:public one{
    public:
    int c;
    void set2(){
        c=15;
    }
    void display2(){
        cout<<c<<endl;
    }
};
int main(){
    two ob1;
    ob1.set();
    ob1.display();
    ob1.set1();
    ob1.display1();
    three ob2;
    ob2.set();
    ob2.display();
    ob2.set2();
    ob2.display2();
}