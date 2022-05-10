https://leetcode.com/problems/jewels-and-stones/
https://www.geeksforgeeks.org/std-count-cpp-stl/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int jewel_len = jewels.length();
        int stone_len = stones.length();
        
        int c=0;
        
        for(int i=0;i<jewel_len;i++)
        {
            char j = jewels[i];
            c+=count(stones.begin(),stones.end(),j);
        }
        
        return c;
    }
};
