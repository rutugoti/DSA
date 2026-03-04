#include<iostream>
using namespace std;

void print(int num,int n){


    if(num  == n){
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+1,n);


}

void print1(int n){


    if(n==1){
        cout<<1<<endl;
        return;
    }
        print1(n-1);
        cout<<n<<endl;

}


void printeven(int n,int num ){

    if(n==num){
        cout<<n<<endl;
        return;

    }
    cout<<n<<" ";
    printeven(n+2,num);
}
int main(){

    int n;
    cin>>n;

   // print(1,n);

   //print1(n);

   if(n%2==1)
   n--;

   printeven(2,n);


}