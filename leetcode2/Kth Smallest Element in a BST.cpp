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
    int pp;
    int kthSmallest(TreeNode* root, int k) {
        help(root,k);
        return pp;
    }
    void help(TreeNode* root,int k){
    stack<TreeNode*> res;
        vector<int> rr;
        while(root!=NULL || !res.empty()){
            while(root!=NULL){
            res.push(root);
            root = root->left;
            }
            root = res.top();
            rr.push_back(root->val);
            res.pop();
            root = root->right;
        }
        pp = rr[k-1];
    }
};
