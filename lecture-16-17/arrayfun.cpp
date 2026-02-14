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
//https://leetcode.com/problems/sum-of-unique-elements/
//http://geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1 similer to the zero tailing 
//https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
//https://www.geeksforgeeks.org/problems/count-number-of-elements-between-two-given-elements-in-array4044/1
//https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab  lookin it solve with the hashmap