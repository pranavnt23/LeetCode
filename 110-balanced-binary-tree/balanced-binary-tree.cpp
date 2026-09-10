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
    bool res=true; 
    int findBalance(TreeNode* root){
        if(root==NULL) return 0;
        int l=0,r=0;
        l=findBalance(root->left);
        r=findBalance(root->right);
        if(abs(l-r)>1) res=false;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        findBalance(root);
        return res;
    }
};