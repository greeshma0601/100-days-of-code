/*
https://leetcode.com/problems/find-the-duplicate-number/
https://www.youtube.com/watch?v=32Ll35mhWg0&t=6s
https://takeuforward.org/data-structure/find-the-duplicate-in-an-array-of-n1-integers/

TC = O(N)
SC = O(1)
*/
class Solution {
public:
    int findDuplicate(vector<int>& a) {
    
        int s = a[0];
        int f = a[0];
        
        
       do
        {
            s = a[s];
            f = a[a[f]];
        } while(s != f);
        
        f = a[0];
        while(s != f)
        {
            s = a[s];
            f = a[f];
        }
        
        return s;
    }
};
