
//https://leetcode.com/problems/defanging-an-ip-address/

// class Solution {
// public:
//     string defangIPaddr(string address) {

//         string ans;

//         int index = 0;

//         while(index<address.size()){

//             if(address[index]=='.'){
//                 ans+="[.]";
//             }else{
//                 ans+=address[index];
//             }

//             index++;
//         }

//         return ans;
        
//     }
// };


//https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1




// class Solution {
// public:

//     void rotateClockwise(string &s){
//         char last = s[s.size() - 1];

//         for(int i = s.size() - 1; i > 0; i--){
//             s[i] = s[i - 1];
//         }

//         s[0] = last;
//     }

//     void rotateAntiClockwise(string &s){
//         char first = s[0];

//         for(int i = 0; i < s.size() - 1; i++){
//             s[i] = s[i + 1];
//         }

//         s[s.size() - 1] = first;
//     }

//     bool isRotated(string& s1, string& s2) {

//         if(s1.size() != s2.size())
//             return false;

//         string clockwise = s1;
//         string anticlockwise = s1;

//         // rotate twice clockwise
//         rotateClockwise(clockwise);
//         rotateClockwise(clockwise);

//         if(clockwise == s2)
//             return true;

//         // rotate twice anticlockwise
//         rotateAntiClockwise(anticlockwise);
//         rotateAntiClockwise(anticlockwise);

//         if(anticlockwise == s2)
//             return true;

//         return false;
//     }
// };


//https://leetcode.com/problems/check-if-the-sentence-is-pangram/

// class Solution {
// public:
//     bool checkIfPangram(string sentence) {

//         vector<int>alpha(26,0);

//         for(int i = 0;i<sentence.size();i++){

//             alpha[sentence[i]-'a']=1;
//         }

//         for(int i  =  0 ;i<26;i++){
//             if(alpha[i]==0)
//             return 0;
//         }
        
//         return 1;
//     }
// };