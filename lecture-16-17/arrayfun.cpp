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

// class Solution {
// public:
//     int missingNumber(vector<int>& arr) {
//         int n = arr.size();

//         for(int i = 0; i < n; i++) {
//             while(arr[i] > 0 && arr[i] <= n 
//                   && arr[arr[i] - 1] != arr[i]) {
//                 swap(arr[i], arr[arr[i] - 1]);
//             }
//         }

//         for(int i = 0; i < n; i++) {
//             if(arr[i] != i + 1)
//                 return i + 1;
//         }

//         return n + 1;
//     }
// };
//https://leetcode.com/problems/sum-of-unique-elements/

// class Solution {
// public:
//     int sumOfUnique(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int sum = 0;
//         int n = nums.size();

//         for(int i = 0; i < n; i++) {
//             // Check uniqueness based on neighbors
//             bool isFirst = (i == 0);
//             bool isLast = (i == n - 1);

//             if ((isFirst || nums[i] != nums[i - 1]) && 
//                 (isLast  || nums[i] != nums[i + 1])) {
//                 sum += nums[i];
//             }
//         }

//         return sum;
//     }
// };
//http://geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1 similer to the zero tailing 


// class Solution {
//   public:
//     void segregateElements(vector<int>& arr) {
//         // Your code goes here
        
//         int n = arr.size();

//         // Create an empty vector to store result
//         vector<int> temp(n);

//         // Traverse array and store positive elements in temp array
//         int j = 0; // index of temp
//         for (int i = 0; i < n; i++) {
//             if (arr[i] >= 0) {
//                 temp[j++] = arr[i];
//             }
//         }

//         // Store negative elements in temp array
//         for (int i = 0; i < n; i++) {
//             if (arr[i] < 0) {
//                 temp[j++] = arr[i];
//             }
//         }

//         // Copy contents of temp[] to arr[]
//         for (int i = 0; i < n; i++) {
//             arr[i] = temp[i];
//         }
    
//     }
// };



//https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1


// class Solution {
//   public:
//     int countFreq(vector<int>& arr, int target) {
//        int n = arr.size();
//     int start = 0, end = n - 1;
//     int first = -1, last = -1;

//     // Find first occurrence
//     while (start <= end) {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == target) {
//             first = mid;
//             end = mid - 1; // move left
//         } else if (arr[mid] < target) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }

//     if (first == -1) return 0; // target not found

//     // Find last occurrence
//     start = 0;
//     end = n - 1;
//     while (start <= end) {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == target) {
//             last = mid;
//             start = mid + 1; // move right
//         } else if (arr[mid] < target) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }

//     return last - first + 1;
//     }
// };


//https://www.geeksforgeeks.org/problems/count-number-of-elements-between-two-given-elements-in-array4044/1

// class Solution {
//   public:
//     int getCount(vector<int> &arr, int num1, int num2) {
//            int i = 0;
//            int n  = arr.size();
//     for (i = 0; i < n; i++)
//         if (arr[i] == num1)
//             break;

//     // If num1 is not present or present at end
//     if (i >= n-1)
//         return 0;

//     // Find num2
//     int j;
//     for (j = n-1; j >= i+1; j--)
//         if (arr[j] == num2)
//             break;

//     // If num2 is not present
//     if (j == i)
//         return 0;

//     // return number of elements between
//     // the two elements.
//     return (j - i - 1);
//     }
// };
//https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab  lookin it solve with the hashmap