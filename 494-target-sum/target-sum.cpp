class Solution {
    vector<char> ops = {'+', '-'};

    void findWays(const vector<int>& nums, vector<bool>& taken, int target, int &count, int curr = 0, int idx = 0) {
        if (idx == nums.size() and curr != target) return;
        if (curr == target and idx == nums.size()) {
            count++;
            return;
        }

        for (auto op : ops) {
            if (!taken[idx]) {
                taken[idx] = true;
                if (op == '+')
                    findWays(nums, taken, target, count, curr + nums[idx], idx + 1);
                else
                    findWays(nums, taken, target, count, curr - nums[idx], idx + 1);
                taken[idx] = false;
            }
        }
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int count = 0;
        vector<bool> taken(nums.size());

        findWays(nums, taken, target, count);

        return count;
    }
};