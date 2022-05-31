/*
https://leetcode.com/problems/count-and-say/
https://www.youtube.com/watch?v=1YUqtoT9YoE
https://www.geeksforgeeks.org/look-and-say-sequence/
*/

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)return "1";
        if(n == 2)return "11";
        
        string s = "11";
        
        
        string t;
        for(int i=3;i<=n;i++)
        {
            string t= "";
            int c = 1;
            s+='&';
            for(int j = 1;j<s.length();j++)
            if(s[j] == s[j-1])
            {
                c++;
            }
            else{
                t+=to_string(c);
                t+=s[j-1];
                c=1;
            }
            s=t;
        }
        return s;
    }
};
