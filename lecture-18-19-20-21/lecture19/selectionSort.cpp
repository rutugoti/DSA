#include<iostream>
using namespace std;

int main(){

    int arr[6] = {3,5,2,7,1,4};


    //outer loop will run n-1 time 
    for(int  i = 0; i<5 ;i++){

        int index = i;

        //this inner loop will run n time and check the smallest no and replace with it i and then rouund 2 for outer loop
        for(int  j  = i+1 ;j<6;j++){

            if(arr[j]<arr[index])
            index = j;
        }

        swap(arr[index],arr[i]);
    }

    for(int i = 0;i<6 ;i++){

        cout << arr[i];
    }
}