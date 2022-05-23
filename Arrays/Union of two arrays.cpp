/*
https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#

https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/

TC Time Complexity: O(m * log(m) + n * log(n))


*/

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int>s;
        
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
        return s.size();
    }
};
