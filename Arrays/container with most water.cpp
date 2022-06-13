/*
https://leetcode.com/problems/container-with-most-water/
https://www.youtube.com/watch?v=UuiTKBwPgAo

2 methods:

1.Brute force:

Find the area of the rectangle by two loops 

TC = O(N^2)
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int l=INT_MAX,b;
        int maxarea = 0;
        for(int i=0;i<n;i++)
        {
            for(int j = i+1 ;j<n;j++)
            {
                l = min(height[i],height[j]);
                b = abs(j-i);
                
                maxarea = max(maxarea,l*b);
            }
        }
        
        return maxarea;
    }
};
