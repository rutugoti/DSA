#include<iostream>
using namespace std;


void fun(int a[],int n){

    for(int i=0;i<n;i++){
        cout <<a[i]<<endl;
    }

}

int main(){

    int arr[5] = {3,5,8,6,3};

    fun(arr,5);
}

//https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab