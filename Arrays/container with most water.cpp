/*
https://leetcode.com/problems/container-with-most-water/
https://www.youtube.com/watch?v=UuiTKBwPgAo

2 methods:

1.Brute force:

Find the area of the rectangle by two loops 

TC = O(N^2)


2.Optimal solution

1.take two pointers i and j,
2.Update the pointers i and j if the height is less
3.Compute maxarea using i and j
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

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int i = 0,j = n-1;
        int maxarea = 0;
        
        while(i<j)
        {
            maxarea =max(maxarea, (j-i)*min(height[i],height[j]));
            if(height[i]<height[j])
            {
                i++;
            }
            else{
                j--;
            }
        }
        
        return maxarea;
    }
};
