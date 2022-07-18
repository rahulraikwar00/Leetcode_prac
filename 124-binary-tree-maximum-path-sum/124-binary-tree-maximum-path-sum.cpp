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
    int maxpath(TreeNode* root, int &summ){
        if(!root)return 0;
        
        int lsum = max(0,maxpath(root->left,summ));
        int rsum = max(0,maxpath(root->right,summ));
        
        summ = max(summ,root->val+lsum+rsum);
        
        return (root->val) + max(lsum,rsum);
    }
    int maxPathSum(TreeNode* root) {
        int summ = -1e9;
        maxpath(root,summ);
        return summ;
    }
};