
/*
https://leetcode.com/problems/number-of-1-bits/
https://www.youtube.com/watch?v=5Km3utixwZs
*/
//two methods
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res =0;
        while(n)
        {
            n = n & (n-1);
            res++;
        }
        return res;
    }
};
/*
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res =0;
        while(n)
        {
            res += n%2;
            n =  n>>1;
        }
        return res;
    }
};*/
