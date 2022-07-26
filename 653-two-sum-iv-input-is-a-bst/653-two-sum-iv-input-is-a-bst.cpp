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
    bool check(TreeNode* root,unordered_map<int ,bool> &mp, int k ){
        if(!root)return false;
        if(mp.find(k-root->val)!=mp.end())return true;
        mp[root->val]=true;
        return check(root->left,mp,k)||check(root->right,mp,k);
    }
    
    //  unordered_set<int> s;
    // bool findTarget(TreeNode* root, int k) {
    //     if (!root) return false;
    //     if (s.count(k - root->val)) return true;
    //     s.insert(root->val);
    //     return findTarget(root->left, k) || findTarget(root->right, k);
    // }
    bool findTarget(TreeNode* root, int k) {
     
        unordered_map<int ,bool> mp;
        return check(root,mp,k);
        
    }
};