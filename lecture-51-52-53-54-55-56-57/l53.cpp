#include<iostream>
using namespace std;

int fact(int n ){

    if(n==1||n==0){
        return 1;
    }
   return  n*fact(n-1);
}

int sum(int n){
    if(n==1){
        return 1;
    }

    return n+sum(n-1);
}

int power(int num,int n){

    if(n==1){
        return num;
    }

    return num*power(num,n-1);
}

int sumofsquare(int n){

    if(n==1){
        return 1;
    }

    return n*n +sumofsquare(n-1);
}

int main(){

    int n ;

    n = 5;

    //cout<<fact(n); 
    //cout<<sum(n);
    //cout<<power(2,n);

    cout<<sumofsquare(n);
}