/*
https://leetcode.com/problems/implement-strstr/
https://www.geeksforgeeks.org/check-string-substring-another/
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
            return haystack.find(needle);
        
    }
};

Solution 2
    
    class Solution {
public:
    int strStr(string s2, string s1) {
             int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
        
    }
};
