/*
https://leetcode.com/problems/missing-number/
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int t_sum = 0;
        int sum = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];  
        }
        int n = nums.size();
        t_sum = (n * (n+1))/2;
        
        return t_sum - sum;
    }
};
