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
    int dd(TreeNode*root, int &d){
        if(root == NULL)return 0;
        int l = dd(root->left, d);
        int r = dd(root->right, d);
        d = fmax(d, l+r);
        return fmax(l, r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        dd(root, d);
        return d;
    }
};