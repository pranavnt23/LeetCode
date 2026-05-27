class Solution {
public:

    // Build BST from sorted array
    TreeNode* buildBST(vector<int>& nums, int left, int right) {

        if(left > right)
            return NULL;

        int mid = left + (right - left) / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = buildBST(nums, left, mid - 1);

        root->right = buildBST(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {

        vector<int> nums;

        // Convert linked list to vector
        while(head != NULL) {

            nums.push_back(head->val);

            head = head->next;
        }

        return buildBST(nums, 0, nums.size() - 1);
    }
};