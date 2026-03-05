#include<iostream>
using namespace std;


bool palindrome(string str,int start,int end){


    //base

    if(start>=end)
    return 1;
    //if not match

    if(str[start]!=str[end])
    return 0;
    

    //matched
    else
    return palindrome(str,start+1,end-1);
}


void rev(string &str,int start ,int end){

    if(start>=end){
        return;
    }

    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    rev(str,start+1,end-1);
}

int main(){

  string str = "rohit";

   // cout<<palindrome(str,0,4);

   rev(str,0,4);
   cout<<str<<endl;
    
}