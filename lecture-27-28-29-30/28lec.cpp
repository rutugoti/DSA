// User function template for C++

// class Solution {
//   public:
//     void segregate0and1(vector<int> &arr) {
        // code here
        
       // sort(arr.begin(),arr.end());
        // int count0=0;
        // int count1=0;
        
        // int  n  = arr.size();
        
        // for(int i =0;i<n;i++){
            
        //     if(arr[i]==0)
        //     count0++;
        //     else
        //     count1++;
            
        // }
        
        // for(int i = 0;i<count0;i++){
            
        //     arr[i]=0;
        // }
        
        // for(int i=count0;i<n;i++){
        //     arr[i]=1;
        // }
        
        //two pointer -gfg Segregate 0s and 1s  output :00001111
//         int start = 0;
//         int n  =arr.size();
//         int end = n-1;
        
//         while(start<end){
//             if(arr[start]==0){
//                 start++;
//             }else{
//                 if(arr[end]==0){
//                     swap(arr[start],arr[end]);
//                     start++,end--;
//                 }else{
//                     end--;
//                 }
//             }
//         }
//     }
// };


//leetcode 167 bute force

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n = numbers.size();
        
//         for(int i = 0; i < n - 1; i++){
//             for(int j = i + 1; j < n; j++){
//                 if(numbers[i] + numbers[j] == target){
//                     return {i + 1, j + 1};  // convert to 1-based index
//                 }
//             }
//         }
        
//         return {};
//     }
// };


//optimal

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {

//      int left=0;int right=numbers.size()-1;

//      while(left<right){
//         int sum=numbers[left]+numbers[right];

//         if(sum==target){
//             return {left+1,right+1};
//         }else if(sum>target){
//             right--;
//         }else{
//             left++;
//         }
//      }
//     return {};

        
//     }
// };
    
//https://www.interviewbit.com/problems/pair-with-given-difference/
// #include <vector>
// #include <algorithm>
// #include <cmath>

// int Solution::solve(vector<int> &A, int B) {
    
//     // Sort the array first
//     std::sort(A.begin(), A.end());
//     B = std::abs(B);  // make sure B is positive

//     int start = 0;
//     int end = 1;
//     int n = A.size();

//     while (end < n) {

//         if (start == end) {
//             end++;
//             continue;
//         }

//         int diff = A[end] - A[start];

//         if (diff == B)
//             return 1;      // found a pair
//         else if (diff < B)
//             end++;         // increase difference
//         else
//             start++;       // decrease difference
//     }

//     return 0; // no pair found
// }

//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/
// int Solution::removeDuplicates(vector<int> &A) {
//     int n = A.size();
//     if (n == 0) return 0;  // empty array

//     int slow = 1;  // next position for unique element

//     for (int fast = 1; fast < n; fast++) {
//         if (A[fast] != A[fast - 1]) {
//             A[slow] = A[fast];
//             slow++;
//         }
//     }

//     return slow;  // number of unique elements
// }
