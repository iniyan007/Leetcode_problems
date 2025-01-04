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
    int dfs(TreeNode *root, int t, int s, int *r){
        if(root == NULL)return 0;
        s+=root->val;
        if(!root->left && !root->right){
            if(s == t) *r = 1;
        }
        dfs(root->left, t, s, r);
        dfs(root->right, t, s, r);
        return 1;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int r = 0;
        dfs(root, targetSum, 0, &r);
        return r;
    }
};