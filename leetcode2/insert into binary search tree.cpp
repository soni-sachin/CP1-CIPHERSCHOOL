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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            root = new TreeNode;
            root->val =val;
            return root;
        }
        if(root->val > val)
        {
            if(root->left != NULL)
                insertIntoBST(root->left,val);
            else{
                root->left = new TreeNode;
                root->left->val = val;
                root->left->left = NULL;
                root->left->right = NULL;
            }
        }
        else
        {
            if(root->right != NULL)
                insertIntoBST(root->right,val);
            else{
                root->right= new TreeNode;
                root->right->val = val;
                root->right->left = NULL;
                root->right->right = NULL;
            }
        }
        return root;
    }
};
