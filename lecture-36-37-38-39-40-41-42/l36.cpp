#include<iostream>
using namespace std;

int main(){

    // string s;
    // // cin>>s;

    // getline(cin,s);
    // cout<<s;

    // cout<<s.size();

    // string s1 = "ruu", s2 = "got";
    // string s3 = s1+s2;

    // s3.push_back('t');

    // cout<<s3;


    // string s4 = "neo is the \"good\"boy";
    // cout<<s4;

     string s = "rohitt";

     int start = 0,end  =s.size();

     while(start<end){
        swap(s[start],s[end]);
        start++,end--;
     }

     cout<<s;

     

}