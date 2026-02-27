
//https://leetcode.com/problems/roman-to-integer/

// class Solution {
// public:

//     int num(char c){
//         if(c=='I') return 1;
//         else if(c=='V') return 5;
//         else if(c=='X') return 10;
//         else if(c=='L') return 50;
//         else if(c=='C') return 100;
//         else if(c=='D') return 500;
//         else return 1000;
//     }

//     int romanToInt(string s) {
//         int sum = 0;
//         int index = 0;

//         while(index < s.size() - 1){
//             if(num(s[index]) < num(s[index+1])){
//                 sum -= num(s[index]);
//             } else {
//                 sum += num(s[index]);
//             }
//             index++;   //  Always increment
//         }

//         sum += num(s[index]);  // add last character
//         return sum;
//     }
// };


//https://leetcode.com/problems/integer-to-roman/

// class Solution {
// public:
//     string intToRoman(int num) {
//         vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
//         vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", 
//                                   "L", "XL", "X", "IX", "V", "IV", "I"};
        
//         string result = "";

//         for(int i = 0; i < values.size(); i++){
//             while(num >= values[i]){
//                 result += symbols[i];
//                 num -= values[i];
//             }
//         }
        
//         return result;
//     }
// };

// class Solution {
// public:
//     string intToRoman(int num) {
//     string thousands[] = {"", "M", "MM", "MMM"};
//     string hundreds[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
//     string tens[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
//     string units[]     = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    
//     return thousands[num/1000] + hundreds[(num%1000)/100] + tens[(num%100)/10] + units[num%10];
// }
// };

//https://www.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1?page=1&category=Strings&difficulty=Medium&sortBy=submissions


// class Solution {
// public:
//     vector<int> factorial(int n) {
        
//         vector<int> ans(1, 1);   // Start with 1
        
//         while(n > 1){
            
//             int carry = 0;
            
//             for(int i = 0; i < ans.size(); i++){
                
//                 int res = ans[i] * n + carry;
                
//                 ans[i] = res % 10;   // store last digit
//                 carry = res / 10;    // remaining carry
//             }
            
//             while(carry){
//                 ans.push_back(carry % 10);
//                 carry /= 10;
//             }
            
//             n--;
//         }
        
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };