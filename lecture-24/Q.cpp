//leetcode 852

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {

//         int n =  arr.size();

//         int start = 0,end= n-1,mid;

//         while(start<=end){

//            mid = end+(start-end)/2;
//             if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//                 return mid;
//             }else if(arr[mid]>arr[mid-1]){
//                 start = mid+1;
//             }else{
//                 end  = mid-1;
//             }

//         }
//         return -1;
        
//     }
// };

//https://leetcode.com/problems/kth-missing-positive-number/

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {

//         int start = 0, end = arr.size() - 1;

//         while (start <= end) {

//             int mid = start + (end - start) / 2;

//             // Missing numbers until index mid
//             if (arr[mid] - (mid + 1) >= k) {
//                 end = mid - 1;
//             } else {
//                 start = mid + 1;
//             }
//         }

//         return start + k;
//     }
// };

//leetcode 81

// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {

//         int start = 0;
//         int end = nums.size() - 1;

//         while (start <= end) {

//             int mid = start + (end - start) / 2;

//             if (nums[mid] == target) {
//                 return true;
//             }

//             // 🔴 Key edge case: duplicates
//             if (nums[start] == nums[mid] && nums[mid] == nums[end]) {
//                 start++;
//                 end--;
//             }
//             // Left half is sorted
//             else if (nums[start] <= nums[mid]) {

//                 if (nums[start] <= target && target < nums[mid]) {
//                     end = mid - 1;
//                 } else {
//                     start = mid + 1;
//                 }
//             }
//             // Right half is sorted
//             else {

//                 if (nums[mid] < target && target <= nums[end]) {
//                     start = mid + 1;
//                 } else {
//                     end = mid - 1;
//                 }
//             }
//         }

//         return false;
//     }
// };
