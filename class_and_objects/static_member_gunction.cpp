#include<iostream>
using namespace std;
class one{
    public:
    int a,b;
    static int c;
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<" "<<b<<" "<<endl;
    }
    static void print(){
        cout<<c<<endl;
    }
};
int one::c;
int main(){
    one ob1;
    ob1.set(2,3);
    ob1.display();
    ob1.print();
    one::print();
}

