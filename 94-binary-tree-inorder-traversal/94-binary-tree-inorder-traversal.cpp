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
      
vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> res;

    TreeNode *cur = root;

    while (cur != NULL)
    {
        if (cur->left == NULL)
        {
            res.push_back(cur->val);
            cur = cur->right;
        }
        else
        {
            TreeNode *predi = cur->left;
            while (predi->right != NULL && predi->right != cur)
            {
                predi = predi->right;
            }

            if (predi->right == NULL)
            {
                predi->right = cur;
                cur = cur->left;
            }
            else
            {
                predi->right = NULL;
                res.push_back(cur->val);
                cur = cur->right;
            }
        }
    }
    return res;
}
};


// vector < int > inorderTraversal(node * root) {
//   vector < int > inorder;

//   node * cur = root;
//   while (cur != NULL) {
//     if (cur -> left == NULL) {
//       inorder.push_back(cur -> data);
//       cur = cur -> right;
//     } else {
//       node * prev = cur -> left;
//       while (prev -> right != NULL && prev -> right != cur) {
//         prev = prev -> right;
//       }

//       if (prev -> right == NULL) {
//         prev -> right = cur;
//         cur = cur -> left;
//       } else {
//         prev -> right = NULL;
//         inorder.push_back(cur -> data);
//         cur = cur -> right;
//       }
//     }
//   }
//   return inorder;
// }
