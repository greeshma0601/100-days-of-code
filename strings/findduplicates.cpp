/*
https://leetcode.com/problems/find-all-duplicates-in-an-array/
https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mp;
        int n = nums.size();
        
        vector<int>dup;
        for(int i = 0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second == 2)
                dup.push_back(it.first);
        }
        return dup;
    }
};
