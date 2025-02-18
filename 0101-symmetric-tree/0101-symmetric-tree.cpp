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
    void dfs1(TreeNode *root, vector<int>&n1){
        if(!root){
            n1.push_back(INT_MAX);
            return ;
        }
        n1.push_back(root->val);
        dfs1(root->right,n1);
        dfs1(root->left,n1);
    }
    void dfs(TreeNode *root, vector<int>&n1){
        if(!root){
            n1.push_back(INT_MAX);
            return ;
        }
        n1.push_back(root->val);
        dfs(root->left,n1);
        dfs(root->right,n1);
    }
    bool isSymmetric(TreeNode* root) {
        vector<int>n1;
        vector<int>n2;
        dfs(root->left, n1);
        dfs1(root->right, n2);
        if(n1.size()!= n2.size())return false;
        for(int i = 0; i<n1.size();i++){
            if(n1[i] != n2[i])return false;
        }
        return true;
    }
};