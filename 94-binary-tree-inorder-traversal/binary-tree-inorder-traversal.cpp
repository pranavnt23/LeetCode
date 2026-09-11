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
    vector<int> ans;
    stack<TreeNode*> stk;
    void traverse(TreeNode* curr){
            while(!stk.empty()||curr!=NULL){
                while(curr!=NULL){
                    stk.push(curr);
                    curr=curr->left;
                }
                ans.push_back(stk.top()->val);
                if(stk.top()->right) {
                    curr=stk.top()->right;
                }
                stk.pop();
            }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        traverse(root);
        return ans;
    }
};