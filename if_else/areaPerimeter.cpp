#include<iostream>
using namespace std;
int main(){
    int length,breadth,area=0,perimeter=0;
    cout<<"enter length:";
    cin>>length;
    cout<<"enter breadth:";
    cin>>breadth;
    area=length*breadth;
    cout<<area<<endl;
    perimeter=2*(length+breadth);
    cout<<perimeter<<endl;
    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }else{
        cout<<"area is smaller than perimeter";
    }

}
