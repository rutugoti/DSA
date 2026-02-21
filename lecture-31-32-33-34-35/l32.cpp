
#include<iostream>
#include<vector>
using namespace std ;

void  wave(int arr1[][4],int row ,int col){
    for(int j =0;j<col;j++){
        //
        if(j%2==0){
            for(int i=0;i<row;i++){
                cout<<arr1[i][j]<<" ";
            }
        }else{
            for(int i=row-1;i>0;i--){
                cout<<arr1[i][j]<<" ";
            }

        }
    }

}

int main(){

    //create 2D vector
    int n,m;
    cin>>n>>m;

    vector<vector<int> >matrix(n,vector<int>(m,1));

    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // for(int i  =0;i<3;i++){
    //     for(int j= 0;j<4;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    // }

    // cout<<"ROWS="<<matrix.size();
    // cout<<"COLS="<<matrix[0].size();

    // for(int i = 0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>matrix[i][j];
    //     }
    // }

    
    // for(int i = 0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<matrix[i][j]<<" ";
    //         cout<<endl;
    //     }
    // }

    //wave print 
    wave(arr1,3,4);


}


//https://leetcode.com/problems/spiral-matrix/

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {

//         vector<int> ans;
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int top = 0, bottom = row - 1, left = 0, right = col - 1;

//         while (top <= bottom && left <= right) {

//             // print top

//             for (int j = left; j <= right; j++) {
//                 ans.push_back(matrix[top][j]);
//             }
//             top++;

//             // print right
//             for (int i = top; i <= bottom; i++) {
//                 ans.push_back(matrix[i][right]);
//             }
//             right--;

//             // print bottom
//             if (top <= bottom) {
//                 for (int j = right; j >= left; j--) {
//                     ans.push_back(matrix[bottom][j]);
//                 }
//                 bottom--;
//             }
//             // print left
//             if (left <= right) {
//                 for (int i = bottom; i >= top; i--) {
//                     ans.push_back(matrix[i][left]);
//                 }
//                 left++;
//             }
//         }

//         return ans;
//     }
// };


//https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1
// class Solution {
//   public:
//     vector<vector<int>> transpose(vector<vector<int>>& mat) {
//         // code here
//         int n=mat.size();
//         int m=mat[0].size();
//                 vector<vector<int> > ans(m, vector<int>(n));

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 ans[j][i] = mat[i][j];
//             }
//         }
//         return ans;
//     }
// };

//optimize only for the square matrix

// class Solution {
//   public:
//     vector<vector<int>> transpose(vector<vector<int>>& mat) {
//         // code here
//         int n=mat.size();
//         int m=mat[0].size();
              

//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<m;j++){
//                 swap(mat[i][j],mat[j][i]);
//             }
//         }
//         return mat;
//     }
// };