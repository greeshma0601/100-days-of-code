/*
https://leetcode.com/problems/valid-anagram/
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int l1 = s.length();
        int l2 = t.length();
        if(l1!=l2)return 0;
        int a[26]={0};
        int b[26]={0};
        
        for(int i=0;i<l1;i++)
            a[s[i]-'a']++;
        for(int i=0;i<l2;i++)
            b[t[i]-'a']++;
        
        for(int i = 0;i<26;i++)
            if(a[i]!=b[i])
                return 0;
        
        return 1;
    }
};
