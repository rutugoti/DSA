// class Solution {
// public:
//    int fib(int n) {
//         if (n < 2) {
//             return n;
//         }
//         int p = 0, q = 0, r = 1;
//         for (int i = 2; i <= n; ++i) {
//             p = q; 
//             q = r; 
//             r = p + q;
//         }
//         return r;
        
//     }
// };


// class Solution {
// public:
//     int fib(int n) {

//         //base case where recursion end

//         if(n==0 || n==1){
//             return n;
//         }


//         return fib(n-1) + fib(n-2);
        
//     }
// };

//https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
// class Solution {
//   public:
//     int gcd(int a, int b) {
//         // code here
        
//         if(b==0)
//         return a;
        
//         return gcd(b,a%b);
        
//     }
// };
