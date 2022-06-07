/*
https://leetcode.com/problems/counting-bits/
https://www.youtube.com/watch?v=RyBM56RIWrM
*/

1.Dynamic Programming 

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1);
        dp[0]=0;
        int offset = 1;
        
        for(int i=1;i<=n;i++)
        {    if(offset*2 == i)
                offset = i;
            dp[i] = 1+dp[i-offset];
        }
        return dp;
    }
};


2.Counting bits using and operation

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
