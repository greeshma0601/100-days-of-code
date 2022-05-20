/*
https://www.youtube.com/watch?v=KV4mRzTjlAk&t=500s
https://takeuforward.org/data-structure/right-left-view-of-binary-tree/

Time Complexity: O(N)

Space Complexity: O(H)       (H -> Height of the Tree)

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        rside(root,v,0);
        return v;
    }
    void rside(TreeNode* root,vector<int> &v,int level)
    {
        if(root == NULL)return;
        
        if(v.size() == level)v.push_back(root->val);
        
        rside(root->right,v,level+1);
        rside(root->left,v,level+1);
    }
};
