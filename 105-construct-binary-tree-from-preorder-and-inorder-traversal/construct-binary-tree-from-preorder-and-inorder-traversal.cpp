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
    unordered_map<int,int>InorderMp;
    int preIdx = 0;
    TreeNode* build(vector<int>& preorder,int start,int end){
        if(start>end){
            return NULL;
        }
        int rootValue = preorder[preIdx++];
        TreeNode* root = new TreeNode(rootValue);
        int i = InorderMp[rootValue];
        root->left = build(preorder, start, i-1);
        root->right = build(preorder, i+1, end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        InorderMp.clear();
        for(int i=0;i<inorder.size();i++){
            InorderMp[inorder[i]] = i;
        }
        return build(preorder,0,inorder.size()-1);
    }
};