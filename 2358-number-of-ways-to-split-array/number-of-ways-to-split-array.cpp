class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total = accumulate(nums.begin(), nums.end(), 0LL);
        int ans = 0;
        long long right = 0, left = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            right += nums[i];
            left = total - right;

            if (right >= left)
                ans++;
        }

        return ans;
    }
};