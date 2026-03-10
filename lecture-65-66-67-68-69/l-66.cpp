
//https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
#include <iostream>
#include <cmath>
using namespace std;

// class Solution {
//   public:

//   void toh(int n, int source, int helper, int dest){
      
//       if(n == 1){
//          // cout << "move disk " << n << " from rod " << source << " to rod " << dest << endl;
//           return;
//       }
      
//       toh(n-1, source, dest, helper);

//      // cout << "move disk " << n << " from rod " << source << " to rod " << dest << endl;

//       toh(n-1, helper, source, dest);
//   }

//   int towerOfHanoi(int n, int from, int to, int aux) {
      
//       toh(n, from, aux, to);

//       return pow(2,n) - 1;
//   }
// };