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
    void iot(TreeNode *root, vector<int>&r){
        if(root == NULL)return;
        iot(root->left, r);
        r.push_back(root->val);
        iot(root->right, r);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        iot(root, res);
        return res;
    }
};