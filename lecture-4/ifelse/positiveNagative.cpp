#include<iostream>
using namespace std;


int main(){

    int n;
    cout << "enter no";

    cin >> n;

    if(n>0){
        cout << " the no you have enterd is positive";
    }else if(n<0){
        cout << " the no you have enterd is negative";
    }else
        cout<<"no is 0";
    
}