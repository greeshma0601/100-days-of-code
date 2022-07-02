/*
https://leetcode.com/problems/reverse-words-in-a-string/
https://www.geeksforgeeks.org/reverse-words-in-a-given-string/
https://www.youtube.com/watch?v=vhnRAaJybpA
*/

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0,j= 0;
        string result;
        while(i<n)
        {
            while(i<n && s[i] == ' ')
                i++;
            if(i>=n)break;
            j = i+1;
            while(j<n && s[j] != ' ')
                j++;
            
            string w = s.substr(i,j-i);
            if(result.length() == 0)
                result = w;
            else
                result = w + ' ' + result;
            
            i = j+1;
        }
        return result;
    }
};
