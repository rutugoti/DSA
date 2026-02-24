
//https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

// class Solution {
//   public:
//     vector<int> findTwoElement(vector<int>& arr) {
//         // code here
//         int n  =arr.size();
        
//         //Decrese value by 1
        
//         for(int i = 0;i<n;i++){
//             arr[i]--;
//         }
        
//         //accerence 
        
//         for(int i=0;i<n;i++){
            
//             arr[arr[i]%n]+=n;
//         }
        
//         vector<int> ans(2);
        
//         for(int i = 0;i<n ;i++){
            
//             //reprting number
            
//             if(arr[i]/n==2){
//                 ans[0]=i+1;
//             }else if(arr[i]/n==0){
//                 ans[1]=i+1;
//             }
//         }
//         return ans;
//     }
// };


//https://leetcode.com/problems/majority-element/
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         int candidate,count=0,n=nums.size();


//         for(int i = 0 ;i<n ;i++){

//             if(count == 0){
//                 count=1;
//                 candidate = nums[i];
//             }else{
//                 if(candidate == nums[i])
//                 count++;
//                 else
//                 count--;
//             }
//         }
//         return candidate;
        
//     }
// };

//https://www.geeksforgeeks.org/problems/majority-element-1587115620/1
// class Solution {
//   public:
//     int majorityElement(vector<int>& nums) {
//         // code here
        
//         int candidate,count=0,n=nums.size();


//         for(int i = 0 ;i<n ;i++){

//             if(count == 0){
//                 count=1;
//                 candidate = nums[i];
//             }else{
//                 if(candidate == nums[i])
//                 count++;
//                 else
//                 count--;
//             }
//         }
        
//         count  = 0;
        
//         for(int i  = 0;i<n;i++){
//             if(candidate==nums[i])
//             count++;
            
//              if(count<n/2)
//         return candidate;
//         else
//         return -1;
//         }
        
       
//     }
// };