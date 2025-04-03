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
    void invtree(TreeNode* rt){
        if(rt==NULL){
            return;
        }
        TreeNode* temp;
        temp=rt->left;
        rt->left=rt->right;
        rt->right=temp;
        invtree(rt->left);
        invtree(rt->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        invtree(root);
        return root;
    }
};