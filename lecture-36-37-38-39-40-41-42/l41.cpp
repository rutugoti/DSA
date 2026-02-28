

//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {

//         vector<bool>count(256,0);

//         int  first  =0,second = 0,len = 0;

//         while(second<s.size()){
            
//             while(count[s[second]]){
//                 count[s[first]]=0;

//                 first++;
//             }
//             count[s[second]]=1;
//             len  = max(len,second-first+1);
//             second++;


//         }
//         return len;
//     }
// };


//https://www.geeksforgeeks.org/problems/smallest-distant-window3132/1?page=1&difficulty

// class Solution
// {
// public:
//     int findSubString(string &str)
//     {
//         // code here
//         vector<int> count(256, 0);
//         int diff = 0;

//         // identifying unique charactorts
//         for (int i = 0; i < str.size(); i++)
//         {
//             if (count[str[i]] == 0)
//                 diff++;

//             count[str[i]]++;
//         }

//         // updating values to zero
//         for (int i = 0; i < 256; i++)
//             count[i] = 0;

//         int i = 0, j = 0, len = str.size();

//         while (j < str.size())
//         {
            
//             // when there is difference
//             while (diff && j < str.size())
//             {
//                 if (count[str[j]] == 0)
//                     diff--;

//                 count[str[j]]++;
//                 j++;
//             }

//             while (diff != 1)
//             {
//                 len = min(len, j - i);
//                 count[str[i]]--;

//                 if (count[str[i]] == 0)
//                     diff++;

//                 i++;
//             }
//         }

//         return len;
//     }
// };


//https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1?page=1&category=Strings&difficulty=Medium&sortBy=submissions

// class Solution
// {
// public:
//     int longestKSubstr(string &s, int k)
//     {
//         // code here
//         int diff = 0, len = -1, i = 0, j = 0;
//         int count[26] = {0};

//         // diff is showing how many different element are there

//         while (j < s.size())
//         {
//             // making string of less than or equal k distint element
//             while (diff <= k && j < s.size())
//             {
//                 if (count[s[j] - 'a'] == 0)
//                     diff++;

//                 count[s[j] - 'a']++;
//                 j++;

//                 if (diff == k)
//                     len = max(len, j - i);
//             }

//             // calculating the length

//             while (diff > k)
//             {
//                 count[s[i] - 'a']--;

//                 if (count[s[i] - 'a'] == 0)
//                     diff--;

//                 i++;
//             }
//         }

//         return len;
//     }
// };


//https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1


// User function Template for C++

// class Solution
// {
// public:
//     int smallestSubstring(string S)
//     {

//         int diff = 3, len = S.size(), i = 0, j = 0;
//         bool change = false;
//         vector<int> mark(3, 0);

//         while (j < S.size())
//         {
//             // if there is element missing then increase the window
//             while (diff && j < S.size())
//             {
//                 if (mark[S[j] - '0'] == 0)
//                     diff--;

//                 mark[S[j] - '0']++;
//                 j++;
//             }

//             // if all the element is marked then shrink the window

//             while (!diff)
//             {
//                 len = min(len, j - i);
//                 change = true;
//                 mark[S[i] - '0']--;

//                 if (mark[S[i] - '0'] == 0)
//                     diff++;

//                 i++;
//             }
//         }
//         return change ? len : -1;
//     }
// };