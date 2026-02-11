#include<iostream>
using namespace std;

int main(){

    // for (int i=1;i<=5;i++){

    //     for(int j=1;j<=5-i;j++){
    //         cout<< " ";
    //     }

    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }

    //     cout <<endl;
    // }


    //  for (int i=1;i<=5;i++){

    //     for(int j=1;j<=5-i;j++){
    //         cout<< " ";
    //     }

    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }

    //     cout <<endl;
    // }


    //  for (int i=1;i<=5;i++){

    //     for(int j=1;j<=5-i;j++){
    //         cout<< " ";
    //     }

    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }

    //     cout <<endl;
    // }

    //  for (int i=1;i<=5;i++){

    //     for(int j=1;j<=5-i;j++){
    //         cout<< " ";
    //     }

    //     for(int j=1;j<=i;j++){
    //         cout<<i;
    //     }

    //     cout <<endl;
    // }


     for (int i=1;i<=5;i++){

        for(int j=1;j<=5-i;j++){
            cout<< " ";
        }

        for(char name='a';name<='a'+i-1;name++){
            cout<<name;
        }

        cout <<endl;
    }
}