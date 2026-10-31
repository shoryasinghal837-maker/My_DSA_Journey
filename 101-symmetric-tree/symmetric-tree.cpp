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
    bool check(TreeNode* Left,TreeNode* Right){
        if(Left==NULL&&Right==NULL){
            return true;
        }
        else if((Left==NULL&&Right!=NULL)||(Left!=NULL&&Right==NULL)){
            return false;
        }
        if((Left->val==Right->val)&&(check(Left->right,Right->left))&&(check(Left->left,Right->right))){
            return true;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return check(root->left,root->right);
    }
};