#include<iostream>
using namespace std;
class sub{
    public:
    int a,b,c;
    void collect();
    void calculate();
    void display();

};
void sub::collect(){
    cout<<"enter a and b:";
    cin>>a>>b;
}
void sub::calculate(){
    c=a-b;
}
void sub::display(){
    cout<<c;
}
int main(){
    sub s;
    s.collect();
    s.calculate();
    s.display();
}