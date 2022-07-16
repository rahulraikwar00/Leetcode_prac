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
    // vector<vector<int>> ans;
//     void dfs(TreeNode *root,int level){
//         if(!root)return;
//         if(level==ans.size()){
//             ans.push_back({});
//         }
//         ans[level].push_back(root->val);
//         dfs(root->left,level+1);
//         dfs(root->right,level+1);
//     }
    
   vector<vector<int>> levelorder(TreeNode* root){
        
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        if (root == NULL)
            return ans;
        q.push(root);
        q.push(NULL);
        vector<int>v;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp!=NULL){
                v.push_back(temp->val);
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            else{
                 ans.push_back(v);
                  v.clear();
                 if (!q.empty())
                    q.push(NULL);
                }
            }
      return ans;     
   }
    // vector<int> ans;
    vector<int> rightSideView(TreeNode* root) {
        vector<int> fans;
       vector<vector<int>> ans =levelorder(root);
        for(auto i:ans){
            fans.push_back(i.back());
        }
        return fans;
    }
};