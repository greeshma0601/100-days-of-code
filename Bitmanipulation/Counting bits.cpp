/*
https://leetcode.com/problems/counting-bits/
https://www.youtube.com/watch?v=RyBM56RIWrM
*/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++)
            v.push_back(nobits(i));
        
        return v;
    }
    int nobits(int n)
    {
        int res = 0;
        while(n)
        {
            n = n & (n-1);
            res++;
        }
        return res;
    }
};
