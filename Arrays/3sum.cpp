/*
https://leetcode.com/problems/3sum/
https://www.youtube.com/watch?v=jzZsG8n2R9A
https://neetcode.io/
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i = 0;i<n;i++)
        {
            if(i == 0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int l = i+1,r = n-1;
                int a= nums[i];
                while(l<r)
                {
                    int threeSum = nums[l]+nums[r]+a;
                    
                    if(threeSum > 0)
                        r = r-1;
                    else if(threeSum < 0)
                        l += 1;
                    else
                    {
                        res.push_back({a,nums[l],nums[r]});
                        l = l+1;
                        
                        while(l<r && nums[l] == nums[l-1])
                            l+=1;
                    }
                }
            }
        }
        return res;
    }
};
