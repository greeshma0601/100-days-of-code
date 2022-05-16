class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> v;
    
    vector<int> inOrder(Node* root) {
        // Your code here
        inordertraversal(root);
        return v;
        
    }
    
    void inordertraversal(Node *root)
    {
        if(root == NULL)return;
        
        inordertraversal(root->left);
        v.push_back(root->data);
        inordertraversal(root->right);
        
    }
};
