/*
https://leetcode.com/problems/valid-parentheses/
geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false

Algo:

1.Declare a character stack S.
2.Now traverse the expression string exp. 
3.If the current character is a starting bracket (‘(‘ or ‘{‘ or ‘[‘) then push it to stack.
4.If the current character is a closing bracket (‘)’ or ‘}’ or ‘]’) then pop from stack and if the popped character is the matching starting bracket then fine else brackets are not balanced.
5.After complete traversal, if there is some starting bracket left in stack then “not balanced”
*/

class Solution {
public:
    bool isValid(string s) {
        stack<int>s1;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s1.empty())//s[i] == '(' || s[i] == '[' || s[i] == '{'
            {
                s1.push(s[i]);
            }
            else if((s[i] == ')' && s1.top() == '(') || (s[i] == ']' && s1.top() == '[') ||  (s[i] == '}'&& s1.top() == '{' ))
            {
                s1.pop();
            }
            else{
                s1.push(s[i]);
            }
        }
        
        if(s1.empty())return true;
        return false;
    }
};
