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
    void pathsum(TreeNode*root, int rs, int *psum){
        if(root == NULL)return;
        if(root->left == NULL && root->right == NULL){
            *psum = *psum + rs * 10 + root->val;
        }
        pathsum(root->left, rs*10 + root->val, psum);
        pathsum(root->right, rs*10 + root->val, psum);
        return;

    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        pathsum(root, 0 ,  &sum);
        return sum;
    }
};