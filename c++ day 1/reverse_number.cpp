//reverse
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4,num5,rev;
    cout<<("enter the number:");
    cin>>num1;
    num2=num1%10;
    num3=num1/10;
    num4=num3%10;
    num5=num1/100;
    rev=num2*100+num4*10+num5;
    cout<<rev;
}






















// #include<stdio.h>
// int main(){
//     int num , num2 , num3, num4 ,num5 ,num6 , num7 ,rev ;
//     printf("enter the three digit number :");
//     scanf("%d",&num);
//        num2 = num % 10;
//        num3 = num / 10;
//        num4 = num3 % 10;
//        num5= num / 100;
//         rev = num2 * 100 + num4 * 10 + num5 ;

   
  
//     printf("the swapped number is :%d",rev);
//     return 0;


// }

