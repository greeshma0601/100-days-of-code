/*
https://www.geeksforgeeks.org/find-the-nth-row-in-pascals-triangle/
https://leetcode.com/problems/pascals-triangle-ii/submissions/
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int>v;
        v.push_back(1);
        long prev = 1;
        long cur;
        for(int i = 1;i<=rowIndex;i++)
        {
            cur = prev * (rowIndex - i +1)/i;
            v.push_back(cur);
            prev = cur;
        }
        return v;
    }
};
