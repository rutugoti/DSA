//https://www.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1?page=1&difficulty

// class Solution {
//   public:
//     int minChar(string &s) {
//         // code here
//         string rev = s;
//         reverse(rev.begin(),rev.end());
//         int size = s.size();
        
//         s+='$';//sepretor
//         s+=rev;//reverse
        
        
//         //lps
//         int n  = s.size();
//         vector<int>lps(n,0);
        
//         int prefix = 0,suffix =1;
        
//         while(suffix<s.size()){
            
//             if(s[prefix]==s[suffix]){
//                 lps[suffix] = prefix+1;
//                 prefix++,suffix++;
//             }else{
                
//                 if(prefix==0){
//                     lps[suffix] = 0;
//                     suffix++;
//                 }else{
//                     prefix = lps[prefix-1];
//                 }
//             }
//         }
        
//         //final ans
//         return size - lps[n-1];
//     }
// };

//https://leetcode.com/problems/repeated-string-match/


// class Solution {
// public:

//   void updateLPS(vector<int> &lps, string &b)
//     {
//         int prefix = 0, suffix = 1;
//         while (suffix < b.size())
//         {
//             if (b[prefix] == b[suffix])
//             {
//                 lps[suffix] = prefix + 1;
//                 suffix++, prefix++;
//             }
//             else
//             {
//                 if (prefix == 0)
//                     suffix++;
//                 else
//                     prefix = lps[prefix - 1];
//             }
//         }
//     }

//     bool KMP_MATCH(string haystack, string needle)
//     {
//         vector<int> lps(needle.size(), 0);
//         updateLPS(lps, needle);

//         int first = 0, second = 0;

//         while (first < haystack.size() && second < needle.size())
//         {
//             if (haystack[first] == needle[second])
//             {
//                 first++, second++;
//             }
//             else
//             {
//                 if (second == 0)
//                     first++;
//                 else
//                     second = lps[second - 1];
//             }
//         }

//         if (second == needle.size())
//             return 1;
//         else
//             return 0;
//     }
//     int repeatedStringMatch(string a, string b) {

//         if(a==b)
//         return 1;

//         int repeat = 1;
//         string temp = a ;

//         while(temp.size()<b.size()){
//             temp+=a;
//             repeat++;
//         }

//         //kmp

//         if(KMP_MATCH(temp,b)==1)
//         return repeat;



//         //temp +1 ,kmp
//         if(KMP_MATCH(temp+a,b)==1)
//         return repeat+1;

//         return -1;
        
//     }
// };


//https://leetcode.com/problems/shortest-palindrome/description/


// class Solution
// {
// public:
//     string shortestPalindrome(string s)
//     {
//         string rev = s;
//         // reverseing the string
//         reverse(rev.begin(), rev.end());

//         string originalString = s;
//         int size = s.size();
//         // updating the original string
//         s = s + '&' + rev;

//         // finding longest prefix suffix
//         vector<int> lps(s.size(), 0);
//         int prefix = 0, suffix = 1;
//         while (suffix < s.size())
//         {
//             if (s[prefix] == s[suffix])
//             {
//                 lps[suffix] = prefix + 1;
//                 suffix++, prefix++;
//             }
//             else
//             {
//                 if (prefix == 0)
//                     suffix++;
//                 else
//                     prefix = lps[prefix - 1];
//             }
//         }

//         int times = size - lps[s.size() - 1];
//       string add_to_start = rev.substr(0, times);

//         return add_to_start + originalString;
//     }
// };



// class Solution
// {
// public:
//     string shortestPalindrome(string s)
//     {
//         string rev = s;
//         // reverseing the string
//         reverse(rev.begin(), rev.end());

//         string originalString = s;
//         int size = s.size();
//         // updating the original string
//         s = s + '&' + rev;

//         // finding longest prefix suffix
//         vector<int> lps(s.size(), 0);
//         int prefix = 0, suffix = 1;
//         while (suffix < s.size())
//         {
//             if (s[prefix] == s[suffix])
//             {
//                 lps[suffix] = prefix + 1;
//                 suffix++, prefix++;
//             }
//             else
//             {
//                 if (prefix == 0)
//                     suffix++;
//                 else
//                     prefix = lps[prefix - 1];
//             }
//         }

//         int times = size - lps[s.size() - 1];
//         string add_to_start = "";
//         int i = 0;
//         while (times)
//         {
//             add_to_start += rev[i];
//             i++;
//             times--;
//         }

//         return add_to_start + originalString;
//     }
// };