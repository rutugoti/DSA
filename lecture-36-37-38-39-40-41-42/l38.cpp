
//https://leetcode.com/problems/longest-palindrome/


// class Solution {
// public:
//     int longestPalindrome(string s) {

//         vector<int>lower(26,0);
//         vector<int>upper(26,0);

//         for(int  i  = 0;i<s.size();i++){
 
//             if(s[i]>='a'){
//                 lower[s[i]-'a']++;
//             }else{
//                 upper[s[i]-'A']++;
//             }
//         }

//         int count  = 0;
//          bool odd =0;

//         for(int  i = 0 ;i<26;i++){

//             //lower

//             if(lower[i]%2==0)
//             count+=lower[i];
//             else{
//                 count+=lower[i]-1;
//                 odd= 1;
//             }

//             //upper
//              if(upper[i]%2==0)
//             count+=upper[i];
//             else{
//                 count+=upper[i]-1;
//                 odd  =1;
//             }
//         }
//         return count+odd;
        
//     }
// };


//https://leetcode.com/problems/sorting-the-sentence/

// class Solution
// {
// public:
//     string sortSentence(string s)
//     {
//         vector<string> v(10, "");
//         int count = 0;
//         string temp = "";
//         for (int i = 0; i < s.size(); i++)
//         {
//             temp += s[i];
//             if ((i == s.size() - 1) || (s[i + 1] == ' '))
//             {
//                 int pos = s[i] - '0'; // temp[temp.size() -1]
//                 temp.pop_back();
//                 v[pos] = temp;
//                 temp = "";
//                 i++;
//                 count++;
//             }
//         }

//         s = "";
//         for (int i = 1; i <= count; i++)
//         {
//             s = s + (v[i] + ' ');
//         }

//         s.pop_back();
//         return s;
//     }
// };