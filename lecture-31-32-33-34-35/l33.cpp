//https://leetcode.com/problems/rotate-image/

// class Solution {
// public:
//     void rotate(vector<vector<int>>& mat) {
         
//         int n = mat.size();
        
//         vector<vector<int>> ans(n, vector<int>(n));
        
//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < n; j++) {
//                 ans[j][n - 1 - i] = mat[i][j];
//             }
//         }
        
//         mat = ans;   
//     }
// };

//optimized

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {

//         // transpose+reverse row = 90 degree

//         int n = matrix.size();

//         // transpose

//         for (int i = 0; i < n - 1; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         // reverse row

//         for (int i = 0; i < n; i++) {
//                     int start = 0, end = n - 1;

//             while (start < end) {
//                 swap(matrix[i][start], matrix[i][end]);
//                 start++, end--;
//             }
//         }
//     }
// };


//https://www.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1

// class Solution {
//   public:
  
//       void rotate(vector<vector<int>>& mat) {
         
//         int n = mat.size();
        
//         vector<vector<int>> ans(n, vector<int>(n));
        
//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < n; j++) {
//                 ans[j][n - 1 - i] = mat[i][j];
//             }
//         }
        
//         mat = ans;   
//     }
//     void rotateMatrix(vector<vector<int>>& mat) {
//         // Code here
//         rotate(mat);
//         rotate(mat);
//     }
// };

//anthoer way to solve reverse col and then reverse row

// class Solution {
//   public:
//     void rotateMatrix(vector<vector<int>>& mat) {
//         // Code here
        
//         int n = mat.size();
//         //col reverse
        
        
//         for(int j=0;j<n;j++){
//             int start = 0,end = n-1;
            
//             while(start<end){
                
//                 swap(mat[start][j],mat[end][j]);
//                 start++,end--;
//             }
//         }
        
        
//         //row reverse
        
//           for(int i=0;i<n;i++){
//             int start = 0,end = n-1;
            
//             while(start<end){
                
//                 swap(mat[i][start],mat[i][end]);
//                 start++,end--;
//             }
//         }
        
//     }
// };


//easy https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1


// class Solution {
//   public:
  
//       void rotate(vector<vector<int>>& mat) {
         
//         int n = mat.size();
        
//         vector<vector<int>> ans(n, vector<int>(n));
        
//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < n; j++) {
//                 ans[j][n - 1 - i] = mat[i][j];
//             }
//         }
        
//         mat = ans;   
//     }
//     void rotateMatrix(vector<vector<int>>& mat) {
//         // Code here
//         rotate(mat);
//         rotate(mat);
//         rotate(mat);
//     }
// };  

//anthoer way

// class Solution {
//   public:
//     void rotateMatrix(vector<vector<int>>& mat) {
//         // code here
//         int n=mat.size();
        
//         //transpose
        
        
//         for (int i = 0; i < n - 1; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 swap(mat[i][j], mat[j][i]);
//             }
//         }

        
//         //reverse col
        
//           for(int j=0;j<n;j++){
//             int start = 0,end = n-1;
            
//             while(start<end){
                
//                 swap(mat[start][j],mat[end][j]);
//                 start++,end--;
//             }
//         }
//     }
// };


//HW - have to print the rotation of the k time that user give so we hust have to return the funtion k time we have to divide the nuber by the k time and then one loop on it and set.
