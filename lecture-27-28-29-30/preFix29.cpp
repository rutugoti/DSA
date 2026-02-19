#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;


bool divide(vector<int> arr){
 int prefix = 0;
    //total sum
    int total_sum=0,n=arr.size();

    for(int i =0;i<n;i++){
        total_sum +=arr[i];
    }

    for(int i = 0;i<n;i++){
         prefix +=arr[i];
         int ans = total_sum - prefix;
         if(ans  ==prefix)
         return 1;
    }
    return 0;
}
int main(){

        int n;
        cin>>n;
    vector<int>v(n);

    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    cout<<divide(v);
}

//Kadane's Algorithm


// class Solution {
//   public:
//     int maxSubarraySum(vector<int> &arr) {
//         // Code here
//         int  n  = arr.size();
        
//         long long maxi  = INT_MIN,prefix = 0;
        
//         for(int i = 0;i<n;i++){
//             prefix+= arr[i];
            
//             maxi = max(maxi,prefix);
            
//             if(prefix<0){
//                 prefix = 0;
//             }
//         }
//         return maxi;
//     }
// };

//Maximum prefix sum for a given range

// class Solution {
// public:
//     vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
//                             vector<int>& rightIndex) {
//         vector<int> results;  // answer store karva mate
//         int q = leftIndex.size();  // total queries

//         // badha queries upar loop
//         for (int k = 0; k < q; k++) {
//             int l = leftIndex[k];   // current query start index
//             int r = rightIndex[k];  // current query end index

//             int sum = 0;           // prefix sum sharu karva mate
//             int maxSum = INT_MIN;  // max prefix sum find karva mate

//             // subarray[l..r] ma prefix sum calculate karvo
//             for (int i = l; i <= r; i++) {
//                 sum += arr[i];               // current element add karo
//                 maxSum = max(maxSum, sum);   // max prefix sum update karo
//             }

//             results.push_back(maxSum);  // current query no answer store karo
//         }

//         return results; // badha query na answers return karo
//     }
// };
