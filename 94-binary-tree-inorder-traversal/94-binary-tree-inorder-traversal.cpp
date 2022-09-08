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
    void f(vector<int>&ref , TreeNode*root){
        if(root==NULL)return;
        
        f(ref , root->left);
        ref.push_back(root->val);
        f(ref, root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ref;
        f(ref , root);
        return ref;
    }
};