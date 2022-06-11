/*
https://leetcode.com/problems/3sum/
https://www.youtube.com/watch?v=jzZsG8n2R9A
https://neetcode.io/
https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/

Algorithm : 
Sort the given array.
Loop over the array and fix the first element of the possible triplet, arr[i].
Then fix two pointers, one at i + 1 and the other at n – 1. And look at the sum, 
If the sum is smaller than the required sum, increment the first pointer.
Else, If the sum is bigger, Decrease the end pointer to reduce the sum.
Else, if the sum of elements at two-pointer is equal to given sum then print the triplet and break.

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
