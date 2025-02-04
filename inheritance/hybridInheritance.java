#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    char name[20];
    void set1(){
        cin>>id>>name;
    }
    void get1(){
        cout<<id<<endl<<name;
    }
};
class exam:public student{
    public:
    int exammarks;
    void set2(){
        cin>>exammarks;
    }
    void get2(){
        cout<<exammarks;
    }
};
class sports{
    public:
    int smarks;
    void set3(){
        cin>>smarks;
    }
    void get3(){
        cout<<smarks;
    }
};
class result:public exam,sports{
    public:
    void getresult(){
        int total=exammarks+smarks;
        displayget1();
        displayget2();
        displayget3();
        cout<<total<<endl;

    }
};
int main(){
    result ob1;
    ob1.get1();
    ob1.get2();
    ob1.get3();
    
    ob1.displaytotal();
}