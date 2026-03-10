
//https://leetcode.com/problems/permutations-ii/
// class Solution {
// public:
//     void permut(vector<int>& arr, vector<vector<int>>& ans, int index) {

//         // base
//         if (arr.size() == index) {
//             ans.push_back(arr);
//             return;
//         }

//         vector<bool> use(21, 0);
//         for (int i = index; i < arr.size(); i++) {

//             if (use[arr[i] + 10] == 0) {
//                 swap(arr[index], arr[i]);
//                 permut(arr, ans, index + 1);
//                 swap(arr[index], arr[i]);
//                 use[arr[i] + 10] = 1;
//             }
//         }
//     }
//     vector<vector<int>> permuteUnique(vector<int>& nums) {

//         vector<vector<int>> ans;

//         permut(nums, ans, 0);
//         return ans;
//     }
// };



//https://www.geeksforgeeks.org/problems/ways-to-sum-to-n5759/1


// class Solution {
//   public:
//     // function to count the total
    
//     int way(int arr[],int m ,int sum){
//         //base
        
//         if(sum==0)
//         return 1;
        
//         if(sum<0)
//         return 0;
        
//         long long ans = 0;
//         for(int i = 0;i<m;i++){
//             ans+=way(arr,m,sum-arr[i]);
            
//         }
//         return ans;
//     }
//     // number of ways to sum up to 'N'
//     int countWays(int arr[], int m, int N) {
//         // code here.
        
//         return way(arr,m,N);
//     }
// };
