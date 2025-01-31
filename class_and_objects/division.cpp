#include<iostream>
using namespace std;
class division{
    public:
    int a,b,c;
    void collect();
    void calculate();
    void display();

};
void division::collect(){
    cout<<"enter a and b:";
    cin>>a>>b;
}
void division::calculate(){
    c=a/b;
}
void division::display(){
    cout<<c;
}
int main(){
    division div;
    div.collect();
    div.calculate();
    div.display();
}