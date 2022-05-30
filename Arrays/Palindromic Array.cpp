/*
https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1#
*/
class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++)
    	{
    	    string s = to_string(a[i]);
    	    if(!p(s))
    	    return 0;
    	}
    	return 1;
    }
    
    bool p(string s)
    {
        int i=0;int j = s.length()-1;
        
        while(i<j)
        {
            if(s[i] == s[j])
            {
                i++;j--;
            }
            else
            return 0;
        }
        return 1;
    }
};
