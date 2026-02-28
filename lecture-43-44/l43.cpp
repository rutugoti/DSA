
//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

// class Solution {
// public:

//  void lpsfind(  vector<int>&lps,string s) {
//         // code here
        
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
        
//     }
//     int strStr(string haystack, string needle) {

//         vector<int>lps(needle.size(),0);
//         lpsfind(lps,needle);

//         int first = 0,second = 0;

//         while(first<haystack.size() && second<needle.size()){

//             //match

//             if(haystack[first]==needle[second]){

//                 first++,second++;
//             }else{

//                 if(second == 0){
//                     first++;
//                 }else{
//                     second = lps[second - 1];
//                 }
//             }
//         }

//         //ans exist

//         if(second == needle.size())
//         return first - second;
//         return -1;
//     }
// };


//https://www.geeksforgeeks.org/problems/search-pattern0205/1


// class Solution {
// public:

//     void lpsfind(vector<int>& lps, string &s) {
//         int prefix = 0, suffix = 1;

//         while (suffix < s.size()) {
//             if (s[prefix] == s[suffix]) {
//                 lps[suffix] = prefix + 1;
//                 prefix++;
//                 suffix++;
//             } else {
//                 if (prefix == 0) {
//                     lps[suffix] = 0;
//                     suffix++;
//                 } else {
//                     prefix = lps[prefix - 1];
//                 }
//             }
//         }
//     }

// vector<int> search(string pat, string txt) {

//     vector<int> ans;

//     if (pat.size() == 0)
//         return ans;

//     vector<int> lps(pat.size(), 0);
//     lpsfind(lps, pat);

//     int i = 0, j = 0;

//     while (i < txt.size()) {

//         if (txt[i] == pat[j]) {
//             i++;
//             j++;
//         } 
//         else {
//             if (j == 0)
//                 i++;
//             else
//                 j = lps[j - 1];
//         }

//         if (j == pat.size()) {
//             ans.push_back(i - j);
//             j = lps[j - 1];
//         }
//     }

//     return ans;
// }
// };