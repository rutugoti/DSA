#include<iostream>
#include<climits>
using namespace std;

void print(int arr[],int index,int n){

    if(index==n){
        return;
    }



    cout<<arr[index]<<" ";
    print(arr,index+1,n);
}


int sum (int arr[],int index,int n){

    if(index==n)
    return 0;

    return arr[index]+sum(arr,index+1,n);


}

int minelement(int arr[],int index,int n){

    if(index==n-1)
    return arr[index];

    return min(arr[index],minelement(arr,index+1,n));
}


int main(){

    int arr[] = {3,4,3,4,5,6,1};

   // print(arr,0,5);

   //cout<<sum(arr,0,5);

   cout<<minelement(arr,0,6);


}