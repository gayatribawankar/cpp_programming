#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    char name[20];
   
    void setstudentdata(){
        cout<<"enter rollno and marks:";
        cin>>rollno;
        cin>>name;
    }
    void getstudentdata(){
        cout<<rollno;
        cout<<name;
    }
};
class exam:public student{
    public:
    int exammarks;
    
    void settestmarks(){
        cin>>exammarks;
    }
    void gettestmarks(){
        cout<<exammarks;
    }
};
class sports{
    public:
    int smarks;
    
    void setsportsmarks(){
        cin>>smarks;
    }
    void getsportsmarks(){
        cout<<smarks;
    }
};
class result:public exam,public sports{
    public:
    int total;
};
int main(){
    result ob1;
    ob1.exam::setstudentdata();
    ob1.exam::getstudentdata();
    ob1.settestmarks();
    ob1.gettestmarks();
    ob1.setsportsmarks();
    ob1.getsportsmarks();
    ob1.total=ob1.exammarks+ob1.smarks;
    cout<<ob1.total;
    return 0;
}