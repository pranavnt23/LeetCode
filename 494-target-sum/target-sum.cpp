class Solution {
    int findWays(const vector<int>& nums, int target, int curr = 0, int idx = 0) {
        if (idx == nums.size() and curr != target)
	        return 0;
        if (curr == target and idx == nums.size()) {
            return 1;   
        }

	return  findWays(nums, target, curr + nums[idx], idx + 1)
	       +findWays(nums, target, curr - nums[idx], idx + 1);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return findWays(nums, target);
    }
};