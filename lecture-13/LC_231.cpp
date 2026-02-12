// class Solution {
// public:
//     bool isPowerOfTwo(int n) {

//         if(n<1)return false;

//         while(n!=1){
//             if(n%2==1){
//                 return false;
//             }

//             n=n/2;
//         }
//         return true;
//     }
// };


// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if (n <= 0) return false;
        
//         long long value = 1;
        
//         while (value < n) {
//             value *= 2;
//         }
        
//         return value == n;
//     }
// };
