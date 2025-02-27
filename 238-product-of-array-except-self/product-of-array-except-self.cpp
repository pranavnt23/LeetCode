class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prd = 1;
        int zeroCount = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
                continue;
            }
            prd *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount > 1) {
                ans.push_back(0); 
            } else if (zeroCount == 1) {
                ans.push_back(nums[i] == 0 ? prd : 0); 
            } else {
                ans.push_back(prd / nums[i]); 
            }
        }
        return ans;
    }
};
