https://leetcode.com/problems/missing-number/
https://takeuforward.org/data-structure/find-the-repeating-and-missing-numbers/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int t_sum = (n*(n+1))/2;
        int sum = 0;
        
        for(int i=0;i<n;i++)
        {
          sum+=nums[i];  
        }
        
        return t_sum-sum;
    }
};
