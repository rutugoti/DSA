class Solution {
public:
    long long squaresInChessBoard(long long N) {
        long long ans = 0; // start from 0, not 1
        
        for(long long i = N; i > 0; i--) { // loop control should be i, not N
            long long num = i * i;          // use long long to avoid overflow
            ans += num;
        }
        
        return ans;
    }
};
