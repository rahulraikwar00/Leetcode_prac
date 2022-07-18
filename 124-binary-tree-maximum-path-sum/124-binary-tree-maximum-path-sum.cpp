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
    int summ=-1e9;
    int mx(TreeNode* root){
        if(!root)return 0;
        
        int left = max(0, mx(root->left));
        int right = max(0,mx(root->right));
        
        summ= max(summ, root->val+left+right);
        return (root->val)+max(left,right);
    }
    
    int maxPathSum(TreeNode* root) {
        mx(root);
        return summ;
    }
};