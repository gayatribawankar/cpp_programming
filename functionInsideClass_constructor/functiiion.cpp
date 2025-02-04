#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float average;
    cricketer(string n, int r, float avg){
        name=n;
        runs=r;
        average=avg;
    }
    void print(){
        cout<<name<<" "<<runs<<" "<<average<<endl;

    }
};
int main(){
    cricketer c1("virat kohli",25000,55.2);
    cricketer c2("rohit sharma",18000,47.8);

    c1.print();
    c2.print();
}