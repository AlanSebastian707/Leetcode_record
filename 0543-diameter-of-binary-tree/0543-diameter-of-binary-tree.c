/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a,int b ){
    return a>b?a:b;

} 
int diameter = 0;
int height(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if (lh + rh > diameter) {
        diameter = lh + rh;
    }
    return 1 + max(lh, rh);
}
int diameterOfBinaryTree(struct TreeNode* root) {
    diameter=0;
    height(root);
    return diameter;
}