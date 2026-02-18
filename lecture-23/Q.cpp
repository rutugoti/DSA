//leetcode 34
//find the first and last accoure element of the target 

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {

//         int start = 0,end  =nums.size()-1;
//         int first = -1,last = -1;

//         //first
//         while(start <= end){

//             int mid = start +(end - start)/2;

//             if(nums[mid]==target){
//                 first = mid;
//                 end = mid-1;
//             }else if(nums[mid]<target){
//                 start = mid+1;

//             }else{
//                 end = mid -1;
//             }
//         }

//         //last
//          start = 0,end  =nums.size()-1;

//             while(start <= end){

//             int mid = start +(end - start)/2;

//             if(nums[mid]==target){
//                 last = mid;
//                 start = mid+1;
//             }else if(nums[mid]<target){
//                 start = mid+1;

//             }else{
//                 end = mid -1;
//             }
//         }

//         vector<int> a(2);
//         a[0]  = first;
//         a[1] = last;

//         return a;
//     }
// };

//leetcode 35

// class Solution {
// public:
//     int searchInsert(vector<int>& arr, int key) {

//         int n = arr.size();

//         int start = 0;
//         int end = n - 1;
//         int mid;

//         while (start <= end) {
//             // find the mid

//             //   mid = (start + end) / 2;

//             mid = start + (end - start) / 2;

//             if (arr[mid] == key) {
//                 return mid;
//             } else if (arr[mid] < key) {
//                 start = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         }
//         return start;
//     }
// };

//leetcode 1539

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {

        
//         int low=0;int high=arr.size()-1;

//         while(low<=high){

//             int mid= (low+high)/2;

//             int missing = arr[mid]-(mid+1);

//             if(missing<k){
//                 low=mid+1;
//             }else{
//                 high=mid-1;
//             }
//         }
//         return low+k;
//     }
// };


//gfg cuberoot

// class Solution {
//   public:
//     int cubeRoot(int n) {


//     int start = 1, end = n;
//     int ans = 0;

//     while (start <= end) {
//         int mid = start + (end - start)/2;
//         long long cube = 1LL * mid * mid * mid; // avoid overflow

//         if (cube == n) {
//             return mid; // exact cube root
//         } else if (cube < n) {
//             ans = mid;       // mid is a candidate
//             start = mid + 1; // search right
//         } else {
//             end = mid - 1;   // search left
//         }
//     }

//     return ans; // floor value


//     }
// };