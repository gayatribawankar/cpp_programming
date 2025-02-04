#include<iostream>
using namespace std;
class one{
    public:
    int a;
    void set1(){
        a=5;

    }
    void display1(){
        cout<<a<<endl;
    }
};

class two:public one{
    public:
    int b;
    void set2(){
        b=10;

    }
    void display2(){
        cout<<b;
    }
};
int main(){
    two ob1;
    ob1.set1();
    ob1.display1();
    ob1.set2();
    ob1.display2();
    
    
}