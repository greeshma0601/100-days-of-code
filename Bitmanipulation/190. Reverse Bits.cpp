/*
https://www.youtube.com/watch?v=vy288ZcbWRc
https://leetcode.com/problems/reverse-bits/
*/
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans = 0;
        for(int i=1;i<=32;i++)
        {
            ans<<=1;
            ans = ans | (n&1);
            n>>=1;
        }
        return ans;
    }
};
