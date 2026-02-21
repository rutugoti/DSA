//https://leetcode.com/problems/trapping-rain-water/


// class Solution {
// public:
//     int trap(vector<int>& height) {

//         int n = height.size(),water = 0;

//         int leftmax = 0,rightmax = 0,maxheight  = height[0],index = 0;

//         //max height

//         for(int i =1;i<n;i++){
//             if(maxheight <height[i]){
//                 maxheight = height[i];
//                 index = i;
//             }
//         }

//         //left part

//         for(int i = 0;i<index;i++){
//             if(leftmax>height[i]){
//                 water +=leftmax-height[i];
//             }else{
//                 leftmax = height[i];
//             }
//         }

//         //rigth part

//         for(int i = n-1;i>index;i--){
//             if(rightmax>height[i]){
//                 water +=rightmax-height[i];
//             }else{
//                 rightmax = height[i];
//             }
//         }
//      return water;   
//     }
// };

//https://www.geeksforgeeks.org/problems/four-elements2452/1

// #include <algorithm>
// using namespace std;

// bool find4Numbers(int A[], int n, int X) {
    
//     sort(A, A + n);
    
//     for(int i = 0; i < n - 3; i++) {
        
//         for(int j = i + 1; j < n - 2; j++) {
            
//             int left = j + 1;
//             int right = n - 1;
            
//             while(left < right) {
                
//                 long long sum = (long long)A[i] + A[j] + A[left] + A[right];
                
//                 if(sum == X)
//                     return true;
//                 else if(sum < X)
//                     left++;
//                 else
//                     right--;
//             }
//         }
//     }
    
//     return false;
// }

//https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

// class Solution {
//   public:
//     bool hasTripletSum(vector<int> &arr, int target) {
//         // Code Here
//                 int n  = arr.size();

//         //sort the array
        
//         sort(arr.begin(),arr.end());
        
//         for(int i =0;i<n-2;i++){
            
//             int ans = target - arr[i];
//             int start = i+1,end = n-1;
            
            
//             while(start<end){
//                 if(arr[start]+arr[end]==ans){
//                     return 1;
//                 }else if(arr[start]+arr[end]>ans){
//                     end--;
//                 }else{
//                     start++;
//                 }
//             }
            
//         }
//         return 0;
//     }
// };


//https://www.interviewbit.com/problems/array-3-pointers/

// // int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
//     int i = 0, j = 0, k = 0;
//     int n = A.size(), m = B.size(), l = C.size();
//     int ans = INT_MAX;

//     while(i < n && j < m && k < l) {
//         int mn = min({A[i], B[j], C[k]});
//         int mx = max({A[i], B[j], C[k]});

//         ans = min(ans, mx - mn);

//         // Move the pointer at the minimum element
//         if(mn == A[i]) i++;
//         else if(mn == B[j]) j++;
//         else k++;
//     }

//     return ans;
// }