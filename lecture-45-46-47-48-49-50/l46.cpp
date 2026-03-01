#include<iostream>
using namespace std;

int main(){

    int arr[5] ={1,2,3,4,5};

    int *ptr = arr;


    cout<<arr<<endl;
        cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;

    cout <<ptr<<endl;

    //print the address of the first index

    cout<<arr+1<<endl;
        cout<<&arr[1]<<endl;


        //print the value

        cout<<arr[0]<<endl;
        cout<<*arr<<endl;
        cout<<*(arr+0)<<endl;
        cout<<*ptr<<endl;

        //all address

        for(int i = 0;i<5;i++)
        cout<<arr+i<<endl;

        //print all the value

         for(int i = 0;i<5;i++)
        cout<<*(arr+i)<<endl;

        //print the all the address

        for(int  i  = 0;i<5;i++){
            cout<<ptr+i<<endl;
        }

        //arithmatic op

        //   for(int  i  = 0;i<5;i++){
        //     cout<<*ptr<<" ";
        //     ptr++;
        // }






}