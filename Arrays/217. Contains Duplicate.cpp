/*
https://leetcode.com/problems/contains-duplicate/
*/

/*Approach 1 => use sorting and check for the duplicates*/
  
  TC = O(NLOGN) SC = O(1)
  
  class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
};







/*Approach 2 => use set,insert element if already not found else return true */
  
  TC = O(N) SC = O(N)
