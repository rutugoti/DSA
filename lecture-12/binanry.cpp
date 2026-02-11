#include<iostream>
using namespace std;

int main(){

    // int num;
    // cin>>num;

    // int rem,ans = 0,mul=1;

    // while(num>0){

    //     //reminder
    //     rem = num%2;

    //     //Quotient
    //     num = num/2;

    //     //ans
    //     ans = rem * mul +ans;

    //     //mul
    //     mul = mul*10;

    // }

    // cout <<ans <<endl;

   // binary to decimal
      int num;
    cin>>num;

    int rem,ans = 0,mul=1;

    while(num>0){

        //reminder
        rem = num%10;

        //Quotient
        num = num/10;

        //ans
        ans = rem * mul +ans;

        //mul
        mul = mul*2;

    }

    cout <<ans <<endl;
}