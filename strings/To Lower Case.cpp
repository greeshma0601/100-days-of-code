https://leetcode.com/problems/to-lower-case/

https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/
class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        return s;
    }
};
