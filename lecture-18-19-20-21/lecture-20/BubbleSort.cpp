#include<iostream>
using namespace std;

int main(){

    int arr[1000];

    cout << "enter the no of array for the insert";

    int n;
    cin>>n;

    cout <<"enter array for the inserted no";

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    //incresing order
    // for(int i=n-2;i>=0;i--){
    //     bool swapped  = 0;
    //     for(int j = 0;j<=i;j++){

    //         if(arr[j]>arr[j+1]){
    //             swapped=1;
    //             swap(arr[j],arr[j+1]);
    //         }

    //     }

    //     if(swapped==0)
    //     break;
    // }


    //dec
    // for(int i=n-2;i>=0;i--){
    //     bool swapped  = 0;
    //     for(int j = 0;j<=i;j++){

    //         if(arr[j]<arr[j+1]){
    //             swapped=1;
    //             swap(arr[j],arr[j+1]);
    //         }

    //     }

    //     if(swapped==0)
    //     break;
    // }

  for(int i = 0; i < n-1; i++){
    int swapped = 0;
    for(int j = n-1; j > i; j--){

        swapped = 1;
        if(arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
        }
    }


        if(swapped==0)
        break;
    }

    for(int i=0;i<n;i++){
        cout <<arr[i];
    }
    
}