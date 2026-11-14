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
    TreeNode* FindMin(TreeNode* root){
        TreeNode* temp = root;
        while(temp->left!=NULL){
            temp = temp->left;
        }return temp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        if(key<root->val){
            root->left = deleteNode(root->left,key);
        }
        else if(key>root->val){
            root->right = deleteNode(root->right,key);
        }else{
            // Case 1: NO CHILD
            if(root->left==NULL&&root->right==NULL){
                delete root;
                root=NULL;
            }
            // Case 2: One CHILD
            else if(root->left==NULL){
                TreeNode* temp = root;
                root = root->right;
                delete temp;
            }
            else if(root->right==NULL){
                TreeNode* temp = root;
                root = root->left;
                delete temp;
            }
            // Case 3: Two CHILD
            else{
                TreeNode* temp = FindMin(root->right);
                root->val = temp->val;
                root->right = deleteNode(root->right,temp->val);
            }
        }return root;
    }
};