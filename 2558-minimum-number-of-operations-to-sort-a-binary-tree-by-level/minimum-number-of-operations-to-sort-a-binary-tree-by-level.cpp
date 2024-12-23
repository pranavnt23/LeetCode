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
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> que;
        int tswaps=0;
        que.push(root);
        while(!que.empty()){
            int lvls=que.size();
            vector<int> lvalue(lvls);
            for(int i=0;i<lvls;i++){
                TreeNode* curr=que.front();
                que.pop();
                lvalue[i]=curr->val;

                if(curr->left!=nullptr) que.push(curr->left);
                if(curr->right!=nullptr) que.push(curr->right);
            }
            tswaps+=getMinSwaps(lvalue);
        }
        return tswaps;
    }
private:
    int getMinSwaps(vector<int> original){
        int swaps=0;
        vector<int> target=original;
        sort(target.begin(),target.end());

        unordered_map<int,int> pos;
        for(int i=0;i<original.size();i++){
            pos[original[i]]=i;
        }

        for(int i=0;i<original.size();i++){
            if(original[i]!=target[i]){
                swaps++;

                int curPos=pos[target[i]];
                pos[original[i]]=curPos;
                swap(original[curPos],original[i]);
            }
        }
        return swaps;
    }
};