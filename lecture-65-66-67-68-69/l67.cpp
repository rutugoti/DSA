//https://leetcode.com/problems/find-the-winner-of-the-circular-game/

// class Solution {
// public:


//     int winner(int n,int k){

//         if(n==1)
//         return 0;

//         return (winner(n-1,k)+k)%n;
//     }
//     int findTheWinner(int n, int k) {

//         return winner(n,k)+1;
        
//     }
// };