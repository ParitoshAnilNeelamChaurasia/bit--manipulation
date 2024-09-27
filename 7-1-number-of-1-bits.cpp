// https://leetcode.com/problems/number-of-1-bits/description/

class Solution {
public:
    int hammingWeight(int n) {
        
        int x = __builtin_popcount(n) ;

        return x ;
    }
};
