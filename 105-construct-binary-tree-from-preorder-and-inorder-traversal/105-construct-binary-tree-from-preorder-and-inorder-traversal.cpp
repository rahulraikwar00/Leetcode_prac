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
// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
//     }
// };

class Solution {
public:
   TreeNode* constructTree(vector<int>& preorder, vector<int>& inorder, int prestart,int instart ,int preend , int inend,map<int,int> &mpp)
    {
        if(prestart>preend || instart>inend) return NULL;
        TreeNode* node = new TreeNode(preorder[prestart]);
        int pos = mpp[preorder[prestart]];
        int left_elements = pos-instart;
        node->left= constructTree(preorder,inorder,prestart+1,instart,prestart+left_elements,pos-1,mpp);
        node->right= constructTree(preorder,inorder,prestart+left_elements+1,pos+1,preend,inend,mpp );
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mpp;
        for(int i=0;i<inorder.size();i++)
            mpp[inorder[i]]=i;
        return constructTree(preorder,inorder,0,0,preorder.size()-1,inorder.size()-1,mpp);
    }
};