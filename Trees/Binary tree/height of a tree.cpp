/*
https://www.youtube.com/watch?v=_O-mK2g_jhI
https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1#

*/

class Solution{
    
    public:
    //Function to find the height of a binary tree.
    
    int height(struct Node* node){
        // code here 
        int h;    
        if(node == NULL)return 0;
        int left = height(node->left);
        int right = height(node->right);
        
        return 1+ max(left,right);
    }
};
