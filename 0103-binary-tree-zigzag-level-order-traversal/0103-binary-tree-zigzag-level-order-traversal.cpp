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
 using namespace std;
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        int flag = 0;
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
            flag = !flag;
            if(flag == 1)
            res.push_back(dumm);
            else{
            reverse(dumm.begin(), dumm.end());
            res.push_back(dumm);
            }
        }
        return res;
    }
};