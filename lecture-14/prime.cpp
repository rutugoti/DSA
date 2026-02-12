#include<iostream>

using namespace std;


int sum(int m,int n){  //function declare
    int ans = m+n; //function define 

    return ans;
}


int mul(int m,int n){  //function declare
    int ans = m*n; //function define 

    return ans;
}

bool prime(int n){

    if(n<2){
        return 0;
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        return 1;
    }

}

int main(){
 
    int a;
    cin>>a;

    cout<<prime(a);
    // cout <<mul(a,b)<<endl;
    // cout<<sum(a,b);//function call
}