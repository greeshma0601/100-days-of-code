/*
https://leetcode.com/problems/next-greater-element-i/
https://takeuforward.org/data-structure/next-greater-element-using-stack/
https://www.youtube.com/watch?v=Du881K7Jtk8&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma&index=76
https://www.geeksforgeeks.org/next-greater-element/

The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

 

Example 1:

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.

==================================================================================================================================

Method 1 (Simple) 
Use two loops: The outer loop picks all the elements one by one. The inner loop looks for the first greater element for the element picked by the outer loop. If a greater element is found then that element is printed as next, otherwise, -1 is printed.
*/
// Simple C++ program to print
// next greater elements in a
// given array
#include<iostream>
using namespace std;

/* prints element and NGE pair
for all elements of arr[] of size n */

/*
void printNGE(int arr[], int n)
{
	int next, i, j;
	for (i = 0; i < n; i++)
	{
		next = -1;
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				next = arr[j];
				break;
			}
		}
		cout << arr[i] << " -- "
			<< next << endl;
	}
}

// Driver Code
int main()
{
	int arr[] = {11, 13, 21, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	printNGE(arr, n);
	return 0;
}


Method 2 (Using Stack) 
 
1.Push the first element to stack.
2.Pick rest of the elements one by one and follow the following steps in loop. 
3.Mark the current element as next.
4.If stack is not empty, compare top element of stack with next.
5.If next is greater than the top element, Pop element from stack. next is the next greater element for the popped element.

6.Keep popping from the stack while the popped element is smaller than next. next becomes the next greater element for all such popped elements.

7.Finally, push the next in the stack.
After the loop in step 2 is over, pop all the elements from the stack and print -1 as the next element for them.


*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>s;
        
        
        unordered_map<int,int>a;
 
        for(int i=nums2.size()-1;i>=0;i--)
        {

                while(!s.empty() and nums2[i]>=s.top())
                 s.pop();
                
                if(s.empty())
                    a[nums2[i]] = -1; 
                
                else
                    a[nums2[i]] = s.top();
                
                s.push(nums2[i]);
            
        }
        
        int m = nums1.size();
        vector<int>b;
        for(int i=0;i<m;i++)
        {
            b.push_back(a[nums1[i]]);
        }
        return b;
    }
};
