#include<iostream>
using namespace std;

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
            start  = mid+1;
        }else{
            end = mid-1;
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