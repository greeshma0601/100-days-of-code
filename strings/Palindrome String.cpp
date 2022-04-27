/*
https://practice.geeksforgeeks.org/problems/palindrome-string0817/1#

Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome

Logic => using two pointers

https://www.geeksforgeeks.org/c-program-check-given-string-palindrome/


another one with O(n) complexity 

string p=S;
    reverse(p.begin(), p.end());
    if(p==S) return 1;
    else return 0;
*/

class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    // Your code goes here
	    int i,j;
        int n=s.length()-1;
        for(i=0,j=n-1;i<j;i++,j--)
        {
            if(s[i]!=s[j]);
            return 0;
        }
        return 1;
	}

};
