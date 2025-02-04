#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cp:";
    cin>>cp;
    cout<<"enter sp:";
    cin>>sp;
    if(cp<sp){
        cout<<"seller made profit";
    }else if(cp>sp)
    {
        cout<<"sellesr made loss";
    }
    else{
        cout<<"no profit no loss";
    }
}