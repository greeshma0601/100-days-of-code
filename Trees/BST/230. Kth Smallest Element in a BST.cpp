/*
https://leetcode.com/problems/kth-smallest-element-in-a-bst/
https://www.youtube.com/watch?v=9TJYWh0adfk&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=46

TC = O(n)
SC = O(1)
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;
    int ans;
    void inorder(TreeNode* root,int k)
    {
        if(root == NULL)return;
        
        inorder(root->left,k);
        
        count++;
        if(count == k)
        {
            ans = root->val;
            return;
        }
        
        inorder(root->right,k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
    }
};
