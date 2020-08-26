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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode* > help;
        TreeNode* ptr = root;
        while(ptr!=NULL || !help.empty()){
            while(ptr!=NULL){
                help.push(ptr);
                ptr = ptr->left;
            }
            ptr = help.top();
            res.push_back(ptr->val);
            help.pop();
            ptr= ptr->right;
        }
        return res;
    }
};
