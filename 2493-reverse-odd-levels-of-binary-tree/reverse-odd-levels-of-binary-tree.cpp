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
    TreeNode* reverseOddLevels(TreeNode* root) {
        int level=0;
        traverseTree(root->left,root->right,0);
        return root;
    }
private:
    void traverseTree(TreeNode* lChild,TreeNode* rChild,int level){
        if(lChild==nullptr || rChild==nullptr){
            return;
        }
        if(level%2==0){
            int temp=lChild->val;
            lChild->val=rChild->val;
            rChild->val=temp;
        }
        level++;
        traverseTree(lChild->left,rChild->right,level);
        traverseTree(lChild->right,rChild->left,level);
    }
};