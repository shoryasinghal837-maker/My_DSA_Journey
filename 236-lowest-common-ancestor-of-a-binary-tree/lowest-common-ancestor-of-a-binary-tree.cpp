/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(root==p||root==q){
            return root;
        }
        TreeNode* tLeft = lowestCommonAncestor(root->left, p, q);
        TreeNode* tRight = lowestCommonAncestor(root->right, p, q);
        if(tLeft!=NULL&&tRight!=NULL){
            return root;
        }
        if(tLeft!=NULL){
            return tLeft;
        }return tRight;
    }
};