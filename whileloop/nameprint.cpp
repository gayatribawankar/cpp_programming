//2 Print 5 times your name using for loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=5){
//         cout<<"gayatri"<<endl;
//         i++;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int i=1;
    string name;
    cout<<"enter your name:";
    cin>>name;
    while(i<=5){
        cout<<name<<endl;
        i++;
    }
}