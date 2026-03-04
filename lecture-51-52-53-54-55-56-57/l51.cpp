#include<iostream>
using namespace std;

void fun3(int n ){

    if(n==0){
        cout<<"happy birthday";
        return;
    }

       cout<<  n <<"days left for the birthday\n";

       fun3(n-1);


}


void print(int n){

    //base condition
    if(n==1) {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;

    print(n-1);
}
int main(){

    int n ;

    //itrative

    // for(int  i = n ;i>0;i--){

    //     cout<<  i <<"days left for the birthday\n";
    // }

    // cout <<"happy birthday\n";

   // fun3(3);

   print(9);
}