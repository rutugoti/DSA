//https://leetcode.com/problems/sort-vowels-in-a-string/description/

// class Solution {
// public:
//     string sortVowels(string s) {

//         vector<int>lower(26,0);
//         vector<int>upper(26,0);

//         for(int  i = 0;i<s.size();i++){

//             //lower
//             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){

//                 lower[s[i]-'a']++;
//                 s[i]='#';
//             }
//            //upper

//             else  if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){

//                 upper[s[i]-'A']++;
//                 s[i]='#';
//             }

//         }

//             string vowel;

//             for(int i = 0;i<26;i++){

//                 char c = 'A'+i;

//                 while(upper[i]){
//                     vowel+=c;
//                     upper[i]--;
//                 }
//             }


//              for(int i = 0;i<26;i++){

//                 char c = 'a'+i;

//                 while(lower[i]){
//                     vowel+=c;
//                     lower[i]--;
//                 }
//             }

//             int first = 0,second = 0;

//             while(second<vowel.size()){
//                 if(s[first]=='#'){
//                     s[first]=vowel[second];
//                     second++;
//             }

//                 first++;
//             }



        

//         return s;
        
//     }
// };


//https://leetcode.com/problems/add-strings/description/


// class Solution {
// public:

//     string add(string num1,string num2){
//         int carry = 0,sum;

//         string ans;
//         int index1 = num1.size()-1,index2  = num2.size()-1;

//         //index2>=0

//         while(index2>=0){
//             sum  = (num1[index1]-'0')+(num2[index2]-'0')+carry;

//             carry = sum/10;

//             char c  = '0'+sum%10;

//             ans +=c;

//             index2--,index1--;

//         }

//         //index1>=0

//         while(index1>=0){
//              sum  = (num1[index1]-'0')+carry;

//             carry = sum/10;

//             char c  = '0'+sum%10;

//             ans +=c;
            
//             index1--;
            
//         }

//         if(carry ){
//             ans+='1';
//         }

//         reverse(ans.begin(),ans.end());

//         return ans;
//     }
//     string addStrings(string num1, string num2) {

//         if(num1.size()<num2.size())
//         return add(num2,num1);
//         else
//         return add(num1,num2);
//     }
// };

//https://www.geeksforgeeks.org/problems/case-specific-sorting-of-strings4845/1?page=2&difficulty

// class Solution {
// public:
//     string caseSort(string& s) {
//         string upper = "", lower = "";

//         // Step 1: Separate characters
//         for(char c : s){
//             if(isupper(c))
//                 upper += c;
//             else
//                 lower += c;
//         }

//         // Step 2: Sort separately
//         sort(upper.begin(), upper.end());
//         sort(lower.begin(), lower.end());

//         // Step 3: Refill according to original case
//         int i = 0, j = 0;

//         for(int k = 0; k < s.size(); k++){
//             if(isupper(s[k]))
//                 s[k] = upper[i++];
//             else
//                 s[k] = lower[j++];
//         }

//         return s;
//     }
// };