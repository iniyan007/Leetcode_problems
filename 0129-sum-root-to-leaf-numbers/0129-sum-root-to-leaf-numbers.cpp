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
    void dfs(TreeNode* root, vector<string> &s, string k){
        if(root == NULL){return;}
        if(root->left == NULL && root->right == NULL)s.push_back(k+=to_string(root->val));
        k+=to_string(root->val);
        dfs(root->left, s, k);
        dfs(root->right, s, k);
        return ;
    }
    int sumNumbers(TreeNode* root) {
        vector<string>s;
        string k="";
        dfs(root, s, k);
        int sum=0;
        for(int i = 0;i<s.size();i+=1){
            sum+=stoi(s[i]);
        }
        return sum;
    }
};