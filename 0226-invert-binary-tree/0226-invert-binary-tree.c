/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    struct TreeNode* t=NULL;
    if(root==NULL)
      return NULL;
    t=root->left;
    root->left=root->right;
    root->right=t;
    invertTree(root->left);
    invertTree(root->right);

    return root;

    
}