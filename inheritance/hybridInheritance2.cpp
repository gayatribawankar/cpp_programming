#include<iostream>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"class A"<<endl;
    }
};
class B:public A{
    public:
    void showB(){
        cout<<"class B"<<endl;
    }
};
class C:public A{
    public:
    void showC(){
        cout<<"class C"<<endl;
    }
};
class D:public B,public C{
    public:
    void showD(){
        cout<<"class D"<<endl;
    }
};
int main(){
    D obj;
    
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}