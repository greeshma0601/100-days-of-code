/*
https://leetcode.com/problems/validate-binary-search-tree/

*/

public:
    bool isValidBST(TreeNode* root) {
        return validbst(root, LONG_MIN , LONG_MAX);
    }
    
    bool validbst(TreeNode* root,long min,long max)
    {
        if(root == NULL)return 1;
        if(root->val <= min || root->val>= max)return 0;
        return validbst(root->left,min,root->val) && 
            validbst(root->right,root->val,max);
    }
};
