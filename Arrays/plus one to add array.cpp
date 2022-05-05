https://practice.geeksforgeeks.org/problems/plus-one/1/#
https://www.geeksforgeeks.org/adding-one-to-number-represented-as-array-of-digits/

Given a non-negative number represented as a list of digits, add 1 to the number (increment the number represented by the digits). The digits are stored such that the most significant digit is first element of array.

Example 1:

Input: 
N = 3
arr[] = {1, 2, 4}
Output: 
1 2 5
Explanation:
124+1 = 125, and so the Output


class Solution {
  public:
    vector<int> increment(vector<int> a ,int n) {
        // code here
        

        
        int carry = 0;
        
        a[n-1]+=1;
        carry = a[n-1]/10;
        a[n-1] = a[n-1]%10;
        
        for(int i=n-2;i>=0;i--)
        {
            if(carry)
            {
                a[i]+=1;
                carry = a[i]/10;
                a[i] = a[i]%10;
            }
        }
        
        if (carry)
            a.insert(a.begin(),1);
 
 
        return a;
    }
};
