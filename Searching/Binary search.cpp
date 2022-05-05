https://leetcode.com/problems/binary-search/submissions/
https://www.youtube.com/watch?v=j5uXyPJ0Pew


class Solution {
public:
    int search(vector<int>& a, int target) {
        int n=a.size();
        
        int mid,low,high;
        low=0;
        high=n-1;
        mid=(low+high)/2;
        
        while(low<=high)
        {
            if(a[mid] == target)
                return mid;
            else if(a[mid]<target)
            {
                low=mid+1;
            }
            else{
                high= mid-1;
            }
            
            mid=(low+high)/2;
        }
        return -1;
    }
};
