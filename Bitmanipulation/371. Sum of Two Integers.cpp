/*
https://leetcode.com/problems/sum-of-two-integers/
https://www.youtube.com/watch?v=qq64FrA2UXQ
*/

class Solution {
public:
    int getSum(int a, int b) {
         while(b)
        {
            int carry = a & b; // get all carry bits (all 1&1s)
            a = a^b; // sum of disjoint bits (everything except what needs to be carried)
            
            // shift carry by one, as this is how a regular sum operation works
            // the carry is moved to the next position
            b = (unsigned)carry << 1; 
        }
        return a;
    }
};
