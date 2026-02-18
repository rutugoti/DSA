#include<iostream>
using namespace std;


//problem to solve An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

int BinarySearch(int arr[],int n ,int key){
    int start = 0;
    int end = n-1;
    int mid;

    while(start<=end){
        //find the mid

        mid = (start + end)/2;

        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
           end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){


    int arr[1000];

    int n;

    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter the element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter the key";
    cin>>key;

    cout <<BinarySearch(arr,n,key);
    return  0 ;
}