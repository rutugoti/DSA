// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// void subsequence(string &s, int index, int n, vector<string> &ans, string temp)
// {
//     if (index == n)
//     {
//         ans.push_back(temp);
//         return;
//     }

//     // for NO
//     subsequence(s, index + 1, n, ans, temp);
//     // for YES
//     temp.push_back(s[index]);
//     subsequence(s, index + 1, n, ans, temp);
//     // temp.pop_back();
// }

// int main()
// {
//     string s = "abcd";
//     vector<string> ans;
//     string temp = "";

//     subsequence(s, 0, s.size(), ans, temp);

//     for (int i = 0; i < ans.size(); i++)
//         cout << ans[i] << " ";

//     return 0;
// }


// class Solution
// {
// public:
//     void parenthesis(int n, int left, int right, vector<string> &ans,
//                      string &temp)
//     {
//         // base case
//         if (left == n && right == n)
//         {
//             ans.push_back(temp);
//             return;
//         }

//         // calling for left parenthesis
//         if (left < n)
//         {
//             temp.push_back('(');
//             parenthesis(n, left + 1, right, ans, temp);
//             temp.pop_back();
//         }
//         // calling for right parenthesis
//         if (right < left)
//         {
//             temp.push_back(')');
//             parenthesis(n, left, right + 1, ans, temp);
//             temp.pop_back();
//         }
//     }

//     vector<string> generateParenthesis(int n)
//     {
//         vector<string> ans;
//         string temp;

//         parenthesis(n, 0, 0, ans, temp);

//         return ans;
//     }
// };