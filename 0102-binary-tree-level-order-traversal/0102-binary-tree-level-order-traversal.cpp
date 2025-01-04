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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        if(root == NULL) return res;
        q.push(root);
        while(!q.empty()){
            vector<int>dumm;
            int c = q.size();
            while(c!=0){
                TreeNode * curr = q.front();
                q.pop();
                dumm.push_back(curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
                c--;
            } 
            res.push_back(dumm);
        }
        return res;

    }
};