https://leetcode.com/problems/two-sum/
https://www.youtube.com/watch?v=dRUpbt8vHpo


Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

  
 tc O(N^2)
  
  class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int a,b;
        int n=nums.size();
        int f=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && nums[i]+nums[j]== target)
                {
                    a=i;b=j;
                    f=1;
                    break;
                }
             if(f==1)break;   
            }
             if(f==1)break;  
        }
     v.push_back(a);
        v.push_back(b);
        return v;
    }
};

Approach 2 : Hashing 
https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/

TC AND SC O(N)
  Approach: This problem can be solved efficiently by using the technique of hashing. Use a hash_map to check for the current array value x(let), if there exists a value target_sum-x which on adding to the former gives target_sum. This can be done in constant time. Let’s look at the following example. 

arr[] = {0, -1, 2, -3, 1} 
sum = -2 
Now start traversing: 
Step 1: For ‘0’ there is no valid number ‘-2’ so store ‘0’ in hash_map. 
Step 2: For ‘-1’ there is no valid number ‘-1’ so store ‘-1’ in hash_map. 
Step 3: For ‘2’ there is no valid number ‘-4’ so store ‘2’ in hash_map. 
Step 4: For ‘-3’ there is no valid number ‘1’ so store ‘-3’ in hash_map. 
Step 5: For ‘1’ there is a valid number ‘-3’ so answer is 1, -3 

Algorithm:  

Initialize an empty hash table s.
Do following for each element A[i] in A[] 
If s[x – A[i]] is set then print the pair (A[i], x – A[i])
Insert A[i] into s.
Pseudo Code :  

unordered_set s
for(i=0 to end)
  if(s.find(target_sum - arr[i]) == s.end)
    insert(arr[i] into s)
  else 
    print arr[i], target-arr[i]

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int a,b;
        int n=nums.size();
        int f=0;
        
        unordered_map<int,int>v;
        
        for(int i=0;i<n;i++)
        {
            if(v.find(target-nums[i])!=v.end())
            {
                ans.push_back(v[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            v[nums[i]]=i;
        }
        return ans;
    }
};
