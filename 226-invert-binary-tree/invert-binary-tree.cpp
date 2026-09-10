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
    void invTree(TreeNode* rt){
        if(rt==NULL) return;
        TreeNode* temp=rt->left;
        rt->left=rt->right;
        rt->right=temp;
        invTree(rt->left);
        invTree(rt->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        invTree(root);
        return root;
    }
};