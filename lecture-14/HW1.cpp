#include<iostream>
using namespace std;

// int cube(int n){

//     int ans = n*n*n;
//     return ans;
// }

// int reverse(int n){

//     int ans=0,rem;

//     while(n){

//         rem = n%10;
//         n=n/10;
//         ans = ans*10+rem;

//     }
//             return ans;

// }

// void  rotate1(int &a, int &b, int &c) {
//     int temp = a;   // store original a
//     a = c;          // put c into a
//     c = b;          // put b into c
//     b = temp;       // put original a into b
// }

// void swap(int &a,int &b){

//     a=a+b;
//     b=a-b;
//     a=a-b;



// }

int fact(int n){

    int ans = 1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}


int ncr(int n, int r){
    return fact(n) / (fact(r) * fact(n - r));
}


int main(){


        int n;
        cin>>n;

        int r;
        cin>>r;

        // int c;
        // cin>>c;

      // cout<<cube(a);
      //cout <<reverse(a);

  //   cout<<rotate1(a,b,c);

 // swap(a,b);

//  cout <<a<<endl <<b;

cout <<ncr(n,r);







}