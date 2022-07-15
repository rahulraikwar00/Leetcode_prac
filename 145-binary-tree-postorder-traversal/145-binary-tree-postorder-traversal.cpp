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
    vector<int> v;
    void f(TreeNode* root){
        if(root ==nullptr){
            return;
        }
        f(root->left);
        f(root->right);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root){
            f(root);
        return v;
        
    }
    
//     vector<int> postorderTraversalit(TreeNode* root) {
//     vector<int> postOrderList;
//     stack<TreeNode*> st;
//     TreeNode * curr = root;
//     while (!st.empty() || curr != nullptr) {
//         while (curr) {
//             st.push(curr);
//             st.push(curr);
//             curr = curr->left;
//         }
//         curr = st.top(); 
//         st.pop();
//         if (!st.empty() && st.top() == curr)
//             curr = curr->right;
//         else {
//             postOrderList.push_back(curr->val);
//             curr = NULL;
//         }
//     }
//     return postOrderList;
//     }
};


  
