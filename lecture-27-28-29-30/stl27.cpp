#include<iostream>
#include<vector>
using namespace std;

int main(){

    //create vector

    vector<int>v;

    //size

    cout<<"size of v:"<<v.size()<<endl;
        cout<<"size of v:"<<v.capacity()<<endl;
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
         cout<<"size of v:"<<v.size()<<endl;
        cout<<"size of v:"<<v.capacity()<<endl;
    //update value

    v[1] = 5;
    v.pop_back();
    v.insert(v.begin()+1,50);
    v.clear();

}