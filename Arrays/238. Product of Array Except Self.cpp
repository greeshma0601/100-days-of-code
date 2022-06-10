/*
https://leetcode.com/problems/product-of-array-except-self/
tc O(n)
sc O(1)
https://www.youtube.com/watch?v=bNvIQI2wAjk

https://www.geeksforgeeks.org/a-product-array-puzzle/

Brute force:
Algorithm: 

Create two array prefix and suffix of length n, i.e length of the original array, initialize prefix[0] = 1 and suffix[n-1] = 1 and also another array to store the product.
Traverse the array from second index to end.
For every index i update prefix[i] as prefix[i] = prefix[i-1] * array[i-1], i.e store the product upto i-1 index from the start of array.
Traverse the array from second last index to start.
For every index i update suffix[i] as suffix[i] = suffix[i+1] * array[i+1], i.e store the product upto i+1 index from the end of array
Traverse the array from start to end.
For every index i the output will be prefix[i] * suffix[i], the product of the array element except that element.


Optimal:
Algorithm: 

Create an array product and initialize its value to 1 and a variable temp = 1.
Traverse the array from start to end.
For every index i update product[i] as product[i] = temp and temp = temp * array[i], i.e store the product upto i-1 index from the start of array.
initialize temp = 1 and traverse the array from last index to start.
For every index i update product[i] as product[i] = product[i] * temp and temp = temp * array[i], i.e multiply with the product upto i+1 index from the end of array.
Print the product array.

*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1,postfix = 1;
        int n = nums.size();
        
        vector<int>res(n,1);
                // Perform Postfix product operation by traversing Right -> Left

        for(int i=0;i<n;i++)
        {
            res[i] = prefix;
            prefix *= nums[i];
        }
                // Perform Postfix product operation by traversing Right -> Left

        for(int i=n-1;i>=0;i--)
        {
            res[i] *= postfix;
            postfix *= nums[i];
        }
        return res;
    }
};
