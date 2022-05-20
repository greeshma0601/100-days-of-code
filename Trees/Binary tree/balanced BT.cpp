/*
https://leetcode.com/problems/balanced-binary-tree/

https://takeuforward.org/data-structure/check-if-the-binary-tree-is-balanced-binary-tree/
*/

/*

brute force 
Time Complexity: O(N*N) ( For every node, Height Function is called which takes O(N) Time. Hence for every node it becomes N*N ) 

Space Complexity: O(1) ( Extra Space ) + O(H) ( Recursive Stack Space where “H” is the height of tree )


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
    bool isBalanced(TreeNode* root) {
        if(root == NULL)return 1;
        int l = height(root->left);
        int r =  height(root->right);
        int d = abs(l-r);
        if(d<=1 && isBalanced(root->left) && isBalanced(root->right))return 1;
        return 0;
    }
    
    int height(TreeNode *p)
    {
        if(p == NULL)return 0;
        int l = height(p->left);
        int r = height(p->right);
        if(l>r)
            return l+1;
        else 
            return r+1;
    }
};



/*
Optmized approach 
Time Complexity: O(N) 

Space Complexity: O(1) Extra Space + O(H) Recursion Stack space (Where “H”  is the height of binary tree)

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
    bool isBalanced(TreeNode* root) {
    return height(root)!=-1;
    }
    
    int height(TreeNode *p)
    {
        if(p == NULL)return 0;
        int l = height(p->left);
        
        if(l == -1)return -1;
        
        int r = height(p->right);
        if(r == -1)return -1;
        
        if(abs(l-r)>1)return -1;
            
        if(l>r)
            return l+1;
        else 
            return r+1;
    }
};
*/
