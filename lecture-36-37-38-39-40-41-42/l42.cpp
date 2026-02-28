

// https://www.geeksforgeeks.org/problems/longest-prefix-suffix2527/1

// class Solution {
//   public:
//     int getLPSLength(string &s) {
//         // code here
        
//         vector<int> lps(s.size(), 0);
//         int prefix = 0,suffix = 1;
        
//         while(suffix<s.size()){
            
//             if(s[prefix]==s[suffix]){
//                 lps[suffix] = prefix+1;
                
//                 prefix++,suffix++;
//             }else{
                
//                 if(prefix == 0){
//                     lps[suffix] = 0;
//                     suffix++;
//                 }else{
//                     prefix = lps[prefix-1];
//                 }
//             }
//         }
        
//         return lps[s.size()-1];
//     }
// };



//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/


// class Solution {
// public:
//     int strStr(string haystack, string needle) {

//         int n= haystack.size();
//         int m=needle.size();

//         if(m==0){
//             return 0;
//         }

//         if(m>n){
//             return -1;
//         }
        
//         for(int i=0;i<=n-m;i++){

//             if(haystack[i]==needle[0]){

//                 if(haystack.substr(i,m)==needle){
//                     return i;
//                 }
//             }
//         }
//         return -1;
//     }
// };