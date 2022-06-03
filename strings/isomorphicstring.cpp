/*
https://leetcode.com/problems/isomorphic-strings/
https://www.youtube.com/watch?v=7yF-U1hLEqQ
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>st,ts;
        
        for(int i=0;i<s.length();i++)
        {
            char c1 = s[i];
            char c2 = t[i];
            
       if((st.find(c1) !=st.end() and st[c1]!=c2) or (ts.find(c2) != ts.end() and ts[c2]!=c1))
           return false;
            
            st[c1] = c2;
            ts[c2] = c1;
        }
        
        return true;
    
    }
};
