#include<iostream>
using namespace std;
class mul{
    public:
    int a,b,c;
    void collect();
    void calculate();
    void display();
};
void mul::collect(){
    cout<<"enter a & b:";
    cin>>a>>b;
}
void mul::calculate(){
    c=a*b;
}
void mul::display(){
    cout<<c;
}
int main(){
    mul multi;
    multi.collect();
    multi.calculate();
    multi.display();
}
